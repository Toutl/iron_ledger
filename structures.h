#ifndef STRUCTURES_H
#define STRUCTURES_H

// System User
typedef enum {GUILD_MASTER, SCRIBE} ranks;

typedef struct {
    int id;
    char* username;
    char* password;
    ranks rank;
} guild_officer;

// Member
typedef struct {
    int id;
    char* callsign;
    char* class_type;
    double gold_pouch;
    double equipment_debt;
    int inventory_count;
} adventurer;

// Transaction History
typedef enum {DEPOSIT, WITHDRAWAL, GEAR_RENTAL, GEAR_RETURN} guild_actions;

typedef struct {
    int id;
    char* timestamp;
    guild_actions action_type;
    double amount;
    int hero_id;
} quest_log;

#endif
