/*
OpenCS Project
Copyright (C) 2015 Marco "eukara" Hladik

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

void main( void ) {}
void SetNewParms( void ) {}
void SetChangeParms( void ) {}


void StartFrame( void ) {
	// See if the player count has changed noticeably
	if ( fInGamePlayers > fOldInGamePlayers ) {
//		bprint( "Starting OpenCS Match...\n" );
		
		Timer_Begin( cvar( "mp_freezetime" ), GAME_FREEZE );
		
		fOldInGamePlayers = fInGamePlayers;
	} else {
		// No players? Don't bother updating the Timer
		if ( fInGamePlayers == 0 ) {
			fGameState = GAME_INACTIVE;
			fGameTime = 0;
		} else {
			Timer_Update();
		}
	}
	
	
}

void worldspawn( void ) {
	precache_model (sCSPlayers[1]);
	precache_model (sCSPlayers[2]);
	precache_model (sCSPlayers[3]);
	precache_model (sCSPlayers[4]);
	precache_model (sCSPlayers[5]);
	precache_model (sCSPlayers[6]);
	precache_model (sCSPlayers[7]);
	precache_model (sCSPlayers[8]);
	
	precache_sound( "radio/moveout.wav" );
	precache_sound( "radio/letsgo.wav" );
	precache_sound( "radio/locknload.wav" );
	
	precache_sound( "weapons/ak47-1.wav" );
	precache_sound( "weapons/ak47-2.wav" );
	precache_sound( "weapons/ak47_boltpull.wav" );
	precache_sound( "weapons/ak47_clipin.wav" );
	precache_sound( "weapons/ak47_clipout.wav" );
	precache_sound( "weapons/aug-1.wav" );
	precache_sound( "weapons/aug_boltpull.wav" );
	precache_sound( "weapons/aug_boltslap.wav" );
	precache_sound( "weapons/aug_clipin.wav" );
	precache_sound( "weapons/aug_clipout.wav" );
	precache_sound( "weapons/aug_forearm.wav" );
	precache_sound( "weapons/awp1.wav" );
	precache_sound( "weapons/awp_clipin.wav" );
	precache_sound( "weapons/awp_clipout.wav" );
	precache_sound( "weapons/awp_deploy.wav" );
	precache_sound( "weapons/boltdown.wav" );
	precache_sound( "weapons/boltpull1.wav" );
	precache_sound( "weapons/boltup.wav" );
	precache_sound( "weapons/c4_beep1.wav" );
	precache_sound( "weapons/c4_beep2.wav" );
	precache_sound( "weapons/c4_beep3.wav" );
	precache_sound( "weapons/c4_beep4.wav" );
	precache_sound( "weapons/c4_beep5.wav" );
	precache_sound( "weapons/c4_click.wav" );
	precache_sound( "weapons/c4_disarm.wav" );
	precache_sound( "weapons/c4_disarmed.wav" );
	precache_sound( "weapons/c4_explode1.wav" );
	precache_sound( "weapons/c4_plant.wav" );
	precache_sound( "weapons/clipin1.wav" );
	precache_sound( "weapons/clipout1.wav" );
	precache_sound( "weapons/de_clipin.wav" );
	precache_sound( "weapons/de_clipout.wav" );
	precache_sound( "weapons/de_deploy.wav" );
	precache_sound( "weapons/deagle-1.wav" );
	precache_sound( "weapons/deagle-2.wav" );
	precache_sound( "weapons/dryfire_pistol.wav" );
	precache_sound( "weapons/dryfire_rifle.wav" );
	precache_sound( "weapons/elite_clipout.wav" );
	precache_sound( "weapons/elite_deploy.wav" );
	precache_sound( "weapons/elite_fire.wav" );
	precache_sound( "weapons/elite_leftclipin.wav" );
	precache_sound( "weapons/elite_reloadstart.wav" );
	precache_sound( "weapons/elite_rightclipin.wav" );
	precache_sound( "weapons/elite_sliderelease.wav" );
	precache_sound( "weapons/elite_twirl.wav" );
	precache_sound( "weapons/fiveseven-1.wav" );
	precache_sound( "weapons/fiveseven_clipin.wav" );
	precache_sound( "weapons/fiveseven_clipout.wav" );
	precache_sound( "weapons/fiveseven_slidepull.wav" );
	precache_sound( "weapons/fiveseven_sliderelease.wav" );
	precache_sound( "weapons/flashbang-1.wav" );
	precache_sound( "weapons/flashbang-2.wav" );
	precache_sound( "weapons/g3sg1-1.wav" );
	precache_sound( "weapons/g3sg1_clipin.wav" );
	precache_sound( "weapons/g3sg1_clipout.wav" );
	precache_sound( "weapons/g3sg1_slide.wav" );
	precache_sound( "weapons/generic_reload.wav" );
	precache_sound( "weapons/generic_shot_reload.wav" );
	precache_sound( "weapons/glock18-1.wav" );
	precache_sound( "weapons/glock18-2.wav" );
	precache_sound( "weapons/grenade_hit1.wav" );
	precache_sound( "weapons/grenade_hit2.wav" );
	precache_sound( "weapons/grenade_hit3.wav" );
	precache_sound( "weapons/he_bounce-1.wav" );
	precache_sound( "weapons/headshot2.wav" );
	precache_sound( "weapons/hegrenade-1.wav" );
	precache_sound( "weapons/hegrenade-2.wav" );
	precache_sound( "weapons/knife_deploy1.wav" );
	precache_sound( "weapons/knife_hit1.wav" );
	precache_sound( "weapons/knife_hit2.wav" );
	precache_sound( "weapons/knife_hit3.wav" );
	precache_sound( "weapons/knife_hit4.wav" );
	precache_sound( "weapons/knife_hitwall1.wav" );
	precache_sound( "weapons/knife_slash1.wav" );
	precache_sound( "weapons/knife_slash2.wav" );
	precache_sound( "weapons/knife_stab.wav" );
	precache_sound( "weapons/m249-1.wav" );
	precache_sound( "weapons/m249-2.wav" );
	precache_sound( "weapons/m249_boxin.wav" );
	precache_sound( "weapons/m249_boxout.wav" );
	precache_sound( "weapons/m249_chain.wav" );
	precache_sound( "weapons/m249_coverdown.wav" );
	precache_sound( "weapons/m249_coverup.wav" );
	precache_sound( "weapons/m3-1.wav" );
	precache_sound( "weapons/m3_insertshell.wav" );
	precache_sound( "weapons/m3_pump.wav" );
	precache_sound( "weapons/m4a1-1.wav" );
	precache_sound( "weapons/m4a1_boltpull.wav" );
	precache_sound( "weapons/m4a1_clipin.wav" );
	precache_sound( "weapons/m4a1_clipout.wav" );
	precache_sound( "weapons/m4a1_deploy.wav" );
	precache_sound( "weapons/m4a1_silencer_off.wav" );
	precache_sound( "weapons/m4a1_silencer_on.wav" );
	precache_sound( "weapons/m4a1_unsil-1.wav" );
	precache_sound( "weapons/m4a1_unsil-2.wav" );
	precache_sound( "weapons/mac10-1.wav" );
	precache_sound( "weapons/mac10_boltpull.wav" );
	precache_sound( "weapons/mac10_clipin.wav" );
	precache_sound( "weapons/mac10_clipout.wav" );
	precache_sound( "weapons/mp5-1.wav" );
	precache_sound( "weapons/mp5-2.wav" );
	precache_sound( "weapons/mp5_clipin.wav" );
	precache_sound( "weapons/mp5_clipout.wav" );
	precache_sound( "weapons/mp5_slideback.wav" );
	precache_sound( "weapons/p228-1.wav" );
	precache_sound( "weapons/p228_clipin.wav" );
	precache_sound( "weapons/p228_clipout.wav" );
	precache_sound( "weapons/p228_slidepull.wav" );
	precache_sound( "weapons/p228_sliderelease.wav" );
	precache_sound( "weapons/p90-1.wav" );
	precache_sound( "weapons/p90_boltpull.wav" );
	precache_sound( "weapons/p90_clipin.wav" );
	precache_sound( "weapons/p90_clipout.wav" );
	precache_sound( "weapons/p90_cliprelease.wav" );
	precache_sound( "weapons/pinpull.wav" );
	precache_sound( "weapons/ric1.wav" );
	precache_sound( "weapons/ric2.wav" );
	precache_sound( "weapons/ric3.wav" );
	precache_sound( "weapons/ric4.wav" );
	precache_sound( "weapons/ric5.wav" );
	precache_sound( "weapons/ric_conc-1.wav" );
	precache_sound( "weapons/ric_conc-2.wav" );
	precache_sound( "weapons/ric_metal-1.wav" );
	precache_sound( "weapons/ric_metal-2.wav" );
	precache_sound( "weapons/scout_bolt.wav" );
	precache_sound( "weapons/scout_clipin.wav" );
	precache_sound( "weapons/scout_clipout.wav" );
	precache_sound( "weapons/scout_fire-1.wav" );
	precache_sound( "weapons/sg550-1.wav" );
	precache_sound( "weapons/sg550_boltpull.wav" );
	precache_sound( "weapons/sg550_clipin.wav" );
	precache_sound( "weapons/sg550_clipout.wav" );
	precache_sound( "weapons/sg552-1.wav" );
	precache_sound( "weapons/sg552-2.wav" );
	precache_sound( "weapons/sg552_boltpull.wav" );
	precache_sound( "weapons/sg552_clipin.wav" );
	precache_sound( "weapons/sg552_clipout.wav" );
	precache_sound( "weapons/sg_explode.wav" );
	precache_sound( "weapons/slideback1.wav" );
	precache_sound( "weapons/sliderelease1.wav" );
	precache_sound( "weapons/tmp-1.wav" );
	precache_sound( "weapons/tmp-2.wav" );
	precache_sound( "weapons/ump45-1.wav" );
	precache_sound( "weapons/ump45_boltslap.wav" );
	precache_sound( "weapons/ump45_clipin.wav" );
	precache_sound( "weapons/ump45_clipout.wav" );
	precache_sound( "weapons/usp1.wav" );
	precache_sound( "weapons/usp2.wav" );
	precache_sound( "weapons/usp_clipin.wav" );
	precache_sound( "weapons/usp_clipout.wav" );
	precache_sound( "weapons/usp_silencer_off.wav" );
	precache_sound( "weapons/usp_silencer_on.wav" );
	precache_sound( "weapons/usp_slideback.wav" );
	precache_sound( "weapons/usp_sliderelease.wav" );
	precache_sound( "weapons/usp_unsil-1.wav" );
	precache_sound( "weapons/xm1014-1.wav" );
	precache_sound( "weapons/zoom.wav" );
	
	// TODO: Merge these into a single field
	clientstat( STAT_BUYZONE, EV_FLOAT, fInBuyZone );
	clientstat( STAT_HOSTAGEZONE, EV_FLOAT, fInHostageZone );
	clientstat( STAT_BOMBZONE, EV_FLOAT, fInBombZone );
	clientstat( STAT_MONEY, EV_FLOAT, fMoney );
	clientstat( STAT_SLOT_MELEE, EV_INTEGER, iSlotMelee );
	clientstat( STAT_SLOT_PRIMARY, EV_INTEGER, iSlotPrimary );
	clientstat( STAT_SLOT_SECONDARY, EV_INTEGER, iSlotSecondary );
	clientstat( STAT_SLOT_GRENADE, EV_INTEGER, iSlotGrenade );
	clientstat( STAT_CURRENT_CLIP, EV_INTEGER, iCurrentClip );
	clientstat( STAT_CURRENT_CALIBER, EV_INTEGER, iCurrentCaliber );
	pointerstat( STAT_SESSIONINFO, EV_FLOAT, &fGameState );
}
