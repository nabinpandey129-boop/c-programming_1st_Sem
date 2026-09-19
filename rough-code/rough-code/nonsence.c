#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Structures
struct Voter {
    int id;
    char name[50];
    int hasVoted;
};

struct Candidate {
    int id;
    char name[50];
    int votes;
};

// Global data
struct Voter voters[MAX];
struct Candidate candidates[MAX];

int voterCount = 0;
int candidateCount = 0;

// Admin credentials
char adminUser[] = "admin";
char adminPass[] = "1234";

// ================= FILE HANDLING =================

// Load voters
void loadVoters() {
    FILE *fp = fopen("voters.txt", "r");
    if(fp == NULL) return;

    while(fscanf(fp, "%d %s %d",
        &voters[voterCount].id,
        voters[voterCount].name,
        &voters[voterCount].hasVoted) != EOF) {
        voterCount++;
    }
    fclose(fp);
}

// Save voters
void saveVoters() {
    FILE *fp = fopen("voters.txt", "w");
    for(int i = 0; i < voterCount; i++) {
        fprintf(fp, "%d %s %d\n",
            voters[i].id,
            voters[i].name,
            voters[i].hasVoted);
    }
    fclose(fp);
}

// Save candidates
void saveCandidates() {
    FILE *fp = fopen("candidates.txt", "w");
    for(int i = 0; i < candidateCount; i++) {
        fprintf(fp, "%d %s %d\n",
            candidates[i].id,
            candidates[i].name,
            candidates[i].votes);
    }
    fclose(fp);
}

// Load candidates
void loadCandidates() {
    FILE *fp = fopen("candidates.txt", "r");
    if(fp == NULL) return;

    while(fscanf(fp, "%d %s %d",
        &candidates[candidateCount].id,
        candidates[candidateCount].name,
        &candidates[candidateCount].votes) != EOF) {
        candidateCount++;
    }
    fclose(fp);
}

// ================= VOTER FUNCTIONS =================

// Find voter
int findVoter(int id) {
    for(int i = 0; i < voterCount; i++) {
        if(voters[i].id == id)
            return i;
    }
    return -1;
}

// Register voter
void registerVoter() {
    struct Voter v;

    printf("\nEnter Voter ID: ");
    scanf("%d", &v.id);

    // Duplicate check
    if(findVoter(v.id) != -1) {
        printf("Voter already exists!\n");
        return;
    }

    printf("Enter Name: ");
    scanf("%s", v.name);

    v.hasVoted = 0;

    voters[voterCount++] = v;
    saveVoters();

    printf("Voter Registered Successfully!\n");
}

// ================= CANDIDATE FUNCTIONS =================

// Add candidate (admin)
void addCandidate() {
    struct Candidate c;

    printf("\nEnter Candidate ID: ");
    scanf("%d", &c.id);

    printf("Enter Candidate Name: ");
    scanf("%s", c.name);

    c.votes = 0;

    candidates[candidateCount++] = c;
    saveCandidates();

    printf("Candidate Added Successfully!\n");
}

// Display candidates
void displayCandidates() {
    printf("\nCandidates List:\n");
    for(int i = 0; i < candidateCount; i++) {
        printf("%d. %s (Votes: %d)\n",
            candidates[i].id,
            candidates[i].name,
            candidates[i].votes);
    }
}

// ================= VOTING =================

void castVote() {
    int id, choice;

    printf("\nEnter Voter ID: ");
    scanf("%d", &id);

    int index = findVoter(id);

    if(index == -1) {
        printf("Voter not found!\n");
        return;
    }

    if(voters[index].hasVoted) {
        printf("You have already voted!\n");
        return;
    }

    displayCandidates();

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= candidateCount) {
        candidates[choice - 1].votes++;
        voters[index].hasVoted = 1;

        FILE *fp = fopen("votes.txt", "a");
        if(fp != NULL) {
            fprintf(fp, "Voter %d voted for %s\n",
                id,
                candidates[choice - 1].name);
            fclose(fp);
        }

        saveVoters();
        saveCandidates();

        printf("Vote Cast Successfully!\n");
    } else {
        printf("Invalid choice!\n");
    }
}

// ================= RESULTS =================

void displayResults() {
    printf("\n--- Election Results ---\n");

    for(int i = 0; i < candidateCount; i++) {
        printf("%s : %d votes\n",
            candidates[i].name,
            candidates[i].votes);
    }
}

// ================= ADMIN =================

int adminLogin() {
    char user[20], pass[20];

    printf("\nAdmin Login\n");
    printf("Username: ");
    scanf("%s", user);

    printf("Password: ");
    scanf("%s", pass);

    if(strcmp(user, adminUser) == 0 && strcmp(pass, adminPass) == 0)
        return 1;

    return 0;
}

// Admin menu
void adminMenu() {
    int choice;

    while(1) {
        printf("\n--- Admin Panel ---\n");
        printf("1. View Results\n");
        printf("2. Add Candidate\n");
        printf("3. Logout\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayResults();
                break;
            case 2:
                addCandidate();
                break;
            case 3:
                return;
            default:
                printf("Invalid Choice!\n");
        }
    }
}

// ================= MAIN =================

int main() {
    int choice;

    loadVoters();
    loadCandidates();

    // If no candidates, initialize default
    if(candidateCount == 0) {
        candidateCount = 3;

        candidates[0] = (struct Candidate){1, "CandidateA", 0};
        candidates[1] = (struct Candidate){2, "CandidateB", 0};
        candidates[2] = (struct Candidate){3, "CandidateC", 0};
    }

    while(1) {
        printf("\n=== Online Voting System ===\n");
        printf("1. Admin Login\n");
        printf("2. Register Voter\n");
        printf("3. Cast Vote\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if(adminLogin())
                    adminMenu();
                else
                    printf("Invalid Credentials!\n");
                break;

            case 2:
                registerVoter();
                break;

            case 3:
                castVote();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}