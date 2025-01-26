#pragma once
#include "quantum.h"

enum hd2_keycodes {
  Supply_Pack = QK_KB_0,
  Ballistic_Shield_Backpack,
  Shield_Generator_Pack,
  Jump_Pack,
  Guard_Dog,
  Guard_Dog_Rover,
  Displacer_Pack,
  Resupply,
  Eagle_Strafing_Run,
  Eagle_500kg_Bomb,
  Eagle_110mm_Rocket_Pods,
  Eagle_Airstrike,
  Eagle_Napalm_Airstrike,
  Eagle_Smoke_Strike,
  Eagle_Cluster_Bomb,
  Eagle_Rearm,
  Eagle_AirtoAir_Missiles,
  EM105_Defense_Wall,
  EGL6_Trench_Wall,
  FX12_Shield_Generator_Relay,
  EMG101_HMG_Emplacement,
  MD6_AntiPersonnel_Minefield,
  MDI4_Incendiary_Mines,
  Antitank_Mines,
  AARC3_Tesla_Tower,
  SSSD_Delivery,
  Drilling_Charge,
  Hellbomb,
  HIVE_BREAKER_DRILL,
  Spire_Sterilizer,
  Super_Earth_Flag,
  Thumper,
  Prospecting_Drill,
  Seismic_Probe,
  Hive_Scanner,
  Scrambler,
  Extraction,
  Reinforce,
  Orbital_Illumination_Flare,
  SOS_Beacon,
  Upload_Data,
  Carpet_Bomb,
  Jammed_Pinata,
  SEAF_Artillery,
  Orbital_Precision_Strike,
  Orbital_Airburst_Strike,
  Orbital_EMS_Strike,
  Orbital_120mm_HE_Barrage,
  Orbital_Gas_Strike,
  Orbital_380mm_HE_Barrage,
  Orbital_Laser,
  Orbital_Railcannon_Strike,
  Orbital_Walking_Barrage,
  Orbital_Gatling_Barrage,
  Orbital_Smoke_Strike,
  Medical_Supplies,
  Autocannon,
  Grenade_Launcher,
  Grenade_Launcher_Incendiary,
  Machine_Gun,
  Stalwart,
  Railgun,
  Recoilless_Rifle,
  Laser_Cannon,
  Quasar_Cannon,
  AntiMateriel_Rifle,
  Expendable_AntiTank,
  Commando,
  Flamethrower,
  Heavy_Machine_Gun,
  Airburst_Rocket_Launcher,
  Missile_Silo,
  Spear,
  Arc_Thrower,
  Stinger,
  AG16_Gatling_Sentry,
  AMG43_Machine_Gun_Sentry,
  AM12_Mortar_Sentry,
  AM23_EMS_Mortar_Sentry,
  AMLS4X_Rocket_Sentry,
  AAC8_Autocannon_Sentry,
  Extraction_Beacon,
  EXO45_Patriot_Exosuit,
  EXO49_Emancipator_Exosuit,
};

const int delay = 100;
const int ctrl_delay = 350;
const int ctrl_end_delay = 150;
const int same_key_delay = 25;

bool process_record_user_HD2(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
	case Supply_Pack:
		if (record->event.pressed) {
			register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Ballistic_Shield_Backpack:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Shield_Generator_Pack:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Jump_Pack:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Guard_Dog:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Guard_Dog_Rover:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Displacer_Pack:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Resupply:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Medical_Supplies:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Eagle_Strafing_Run:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Eagle_500kg_Bomb:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Eagle_110mm_Rocket_Pods:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Eagle_Airstrike:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Eagle_Napalm_Airstrike:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Eagle_Smoke_Strike:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Eagle_Cluster_Bomb:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Eagle_Rearm:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Eagle_AirtoAir_Missiles:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case EM105_Defense_Wall:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case EGL6_Trench_Wall:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case FX12_Shield_Generator_Relay:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case EMG101_HMG_Emplacement:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case MD6_AntiPersonnel_Minefield:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case MDI4_Incendiary_Mines:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Antitank_Mines:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case AARC3_Tesla_Tower:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case SSSD_Delivery:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Drilling_Charge:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Extraction_Beacon:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Hellbomb:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case HIVE_BREAKER_DRILL:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Spire_Sterilizer:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Super_Earth_Flag:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Thumper:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Prospecting_Drill:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Seismic_Probe:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Hive_Scanner:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Scrambler:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Extraction:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Reinforce:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_Illumination_Flare:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case SOS_Beacon:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Upload_Data:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Carpet_Bomb:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Jammed_Pinata:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case SEAF_Artillery:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_Precision_Strike:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_Airburst_Strike:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_EMS_Strike:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_120mm_HE_Barrage:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_Gas_Strike:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_380mm_HE_Barrage:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_Laser:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_Railcannon_Strike:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_Walking_Barrage:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_Gatling_Barrage:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Orbital_Smoke_Strike:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case AMLS4X_Rocket_Sentry:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Machine_Gun:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Autocannon:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Grenade_Launcher:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Grenade_Launcher_Incendiary:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Stalwart:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Railgun:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Recoilless_Rifle:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Laser_Cannon:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Quasar_Cannon:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case AntiMateriel_Rifle:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Expendable_AntiTank:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Commando:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Flamethrower:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Heavy_Machine_Gun:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Airburst_Rocket_Launcher:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Missile_Silo:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Spear:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Arc_Thrower:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case Stinger:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case AG16_Gatling_Sentry:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_LEFT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case AMG43_Machine_Gun_Sentry:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case AM12_Mortar_Sentry:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case AM23_EMS_Mortar_Sentry:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case AAC8_Autocannon_Sentry:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);

			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case EXO45_Patriot_Exosuit:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);


			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_NO, same_key_delay);
			tap_code_delay(KC_DOWN, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;

	case EXO49_Emancipator_Exosuit:
		if (record->event.pressed) {
		register_code(KC_LCTL);
			tap_code_delay(KC_NO, ctrl_delay);


			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_RIGHT, delay);
			tap_code_delay(KC_UP, delay);
			tap_code_delay(KC_LEFT, delay);
			tap_code_delay(KC_DOWN, delay);
			tap_code_delay(KC_UP, delay);

			tap_code_delay(KC_NO, ctrl_end_delay);
			unregister_code(KC_LCTL);
		}
		return true;
    default:
      return true; // Process all other keycodes normally
  }
}