#ifndef _LOOKUP_H_
#define _LOOKUP_H_
int			position_lookup			( const char* );
int 		sex_lookup				( const char* );
int 		size_lookup				( const char* );
int			clan_lookup				( const char* );
l_int		flag_lookup				( const char*,const struct flag_type* );
HELP_DATA * help_lookup				( char* );
HELP_AREA * had_lookup				( char* );
CHAR_DATA * grab_char				( CHAR_DATA*,char*,bool );
bool		is_weapon_pierce		( OBJ_DATA* );
bool		is_weapon_small_pierce	( OBJ_DATA* );
bool		is_weapon_big_pierce	( OBJ_DATA* );
bool		is_weapon_blunt			( OBJ_DATA* );
bool		is_weapon_sword			( OBJ_DATA* );
bool		is_weapon_sharp			( OBJ_DATA* );
bool		check_swordsmanship		( CHAR_DATA*,bool,bool );
int			check_swordefficiency	( CHAR_DATA*,OBJ_DATA*,bool );
bool		check_swordmastery		( CHAR_DATA*,bool,bool );
bool		check_lancemastery		( CHAR_DATA* );
bool		is_weapon_bigslash		( OBJ_DATA* );
void		weapon_effects			( CHAR_DATA*,CHAR_DATA*,OBJ_DATA* );
void		shield_effects			( CHAR_DATA*,CHAR_DATA*,OBJ_DATA* );
void		check_whip				( CHAR_DATA*,CHAR_DATA* );
bool		canclass_counter		( CHAR_DATA* );
bool		canclass_riposte		( CHAR_DATA* );
bool		canclass_coule			( CHAR_DATA* );
bool		canclass_absorb			( CHAR_DATA* );
bool		check_critical			( CHAR_DATA*,CHAR_DATA* );
int			check_enhanced			( CHAR_DATA*,CHAR_DATA*,int );
bool		check_mirage			( CHAR_DATA*,CHAR_DATA* );
bool		check_phase				( CHAR_DATA*,CHAR_DATA* );
bool		do_downstrike			( CHAR_DATA*,CHAR_DATA* );
bool		do_trample				( CHAR_DATA* );
void		do_facekick				( CHAR_DATA*,CHAR_DATA* );
int			check_rage				( CHAR_DATA*,int );
bool		check_riposte			( CHAR_DATA*,CHAR_DATA*,int,int );
bool		check_coule				( CHAR_DATA*,CHAR_DATA* );
bool		check_absorb			( CHAR_DATA*,CHAR_DATA*,int );
bool		check_counter			( CHAR_DATA*,CHAR_DATA*,int,int,OBJ_DATA*,int );
bool		check_counterspin		( CHAR_DATA*,CHAR_DATA*,int,int,OBJ_DATA*,int );
bool		check_dodge				( CHAR_DATA*,CHAR_DATA*,OBJ_DATA* );
bool		check_feint				( CHAR_DATA*,CHAR_DATA* );
bool		check_sidestep			( CHAR_DATA*,CHAR_DATA*,OBJ_DATA* );
bool		check_parry				( CHAR_DATA*,CHAR_DATA* );
bool		check_trompement		( CHAR_DATA*,CHAR_DATA* );
bool		check_shield_block		( CHAR_DATA*,CHAR_DATA* );
bool		check_sai_block			( CHAR_DATA*,CHAR_DATA* );
void		check_martial_arts		( CHAR_DATA*,CHAR_DATA*);
bool		check_leadership		( CHAR_DATA* );
bool		check_horsemanship		( CHAR_DATA* );
bool		check_outmaneuver		( CHAR_DATA*,CHAR_DATA* );
bool		canFight				( CHAR_DATA*,CHAR_DATA*,bool );
bool		canPK					( CHAR_DATA*,CHAR_DATA*,bool );
int			calcHands				( CHAR_DATA* );
AREA_DATA 	*area_lookup			(int);
CHAR_DATA 	*get_char_by_id			(int);
int			get_hometown_by_id		(int);
CHAR_DATA *get_random_char			( CHAR_DATA*,OBJ_DATA*,ROOM_INDEX_DATA* );
CHAR_DATA *get_random_char			( CHAR_DATA*,bool );
#endif

