/* Copyright 2022 Nikolay N
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#define HD2_CODES_ENABLED


#ifdef HD2_CODES_ENABLED

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

int delay = 100;
int ctrl_delay = 350;
int ctrl_end_delay = 150;
int same_key_delay = 25;




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
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

#endif


enum my_layers {
    layer0,
    layer1,
    layer2,
    layer3,
    layer4,
    layer5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [layer0] = LAYOUT(
        Supply_Pack,   Reinforce,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer1] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer2] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer3] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer4] = LAYOUT(
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO,   MO(layer5)
    ),
    [layer5] = LAYOUT(
        OSL(layer0),   OSL(layer1),   OSL(layer2),   OSL(layer3),   OSL(layer4),
        TO(layer0),   TO(layer1),   TO(layer2),   TO(layer3),   TO(layer4),
        TG(layer0),   TG(layer1),   TG(layer2),   TG(layer3),   TG(layer4),
        RGB_VAI,   RGB_MOD,   KC_NO,   KC_NO,   KC_NO,
        RGB_VAD,   RGB_TOG,   KC_NO,   KC_NO,   MO(layer5)
    )
};


#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM rgp_layer_0[] = RGBLIGHT_LAYER_SEGMENTS(
    {20, 1, HSV_GREEN },
	{12, 1, HSV_PINK },

    {19, 1, HSV_SPRINGGREEN },
    {6,  1, HSV_SPRINGGREEN },
    {7,  1, HSV_SPRINGGREEN },
    {8,  1, HSV_SPRINGGREEN },
    {9,  1, HSV_SPRINGGREEN },

    {18, 1, HSV_ORANGE },
    {5,  1, HSV_ORANGE },
    {0,  1, HSV_ORANGE },
    {1,  1, HSV_ORANGE },
    {10, 1, HSV_ORANGE },

    {15, 2, HSV_BLUE },

    {23, 2, HSV_BLUE }

);
const rgblight_segment_t PROGMEM rgp_layer_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {21, 1, HSV_GREEN},
	{12, 1, HSV_PINK },
    {23, 2, HSV_BLUE },

	{20, 1, HSV_GOLD },
	{22, 1, HSV_GOLD },
    {19, 1, HSV_GOLD },
    {6,  1, HSV_GOLD },
    {7,  1, HSV_GOLD },

    {18, 1, HSV_RED },
    {5,  1, HSV_RED },
    {0,  1, HSV_RED },
    {1,  1, HSV_RED },
    {10, 1, HSV_RED },

	{16, 2, HSV_PURPLE },
	{4,  1, HSV_PURPLE },
	{3,  1, HSV_PURPLE },
	{2,  1, HSV_PURPLE },
	{11, 1, HSV_PURPLE }
);
const rgblight_segment_t PROGMEM rgp_layer_2[] = RGBLIGHT_LAYER_SEGMENTS(
    {22, 1, HSV_GREEN},
	{12, 1, HSV_PINK }
);
const rgblight_segment_t PROGMEM rgp_layer_3[] = RGBLIGHT_LAYER_SEGMENTS(
    {23, 1, HSV_GREEN},
	{12, 1, HSV_PINK }
);
const rgblight_segment_t PROGMEM rgp_layer_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {24, 1, HSV_GREEN},
	{12, 1, HSV_PINK }
);
const rgblight_segment_t PROGMEM rgp_layer_5[] = RGBLIGHT_LAYER_SEGMENTS(
    {12, 1, HSV_RED},

    {20, 5, HSV_YELLOW},

    {19, 1, HSV_TEAL },
    {6,  1, HSV_TEAL },
    {7,  1, HSV_TEAL },
    {8,  1, HSV_TEAL },
    {9,  1, HSV_TEAL },

    {18, 1, HSV_MAGENTA},
    {5,  1, HSV_MAGENTA},
    {0,  1, HSV_MAGENTA},
    {1,  1, HSV_MAGENTA},
    {10, 1, HSV_MAGENTA},

    {17,  1, HSV_BLUE},
    {16,  1, HSV_BLUE}
);

enum rgb_layer_index {
    L_0,
    L_1,
    L_2,
    L_3,
    L_4,
    L_5
};

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    [L_0]=rgp_layer_0,
    [L_1]=rgp_layer_1,
    [L_2]=rgp_layer_2,
    [L_3]=rgp_layer_3,
    [L_4]=rgp_layer_4,
    [L_5]=rgp_layer_5
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
    rgblight_setrgb(HSV_WHITE);
}

// // #define NUMLOCK_ON (host_keyboard_leds() & (1<<USB_LED_NUM_LOCK))
layer_state_t layer_state_set_user(layer_state_t state) {
    if (layer_state_cmp(state, layer5)) {
        rgblight_set_layer_state(L_0, false);
        rgblight_set_layer_state(L_1, false);
        rgblight_set_layer_state(L_2, false);
        rgblight_set_layer_state(L_3, false);
        rgblight_set_layer_state(L_4, false);
    } else {
        rgblight_set_layer_state(L_0, layer_state_cmp(state, layer0));
        rgblight_set_layer_state(L_1, layer_state_cmp(state, layer1));
        rgblight_set_layer_state(L_2, layer_state_cmp(state, layer2));
        rgblight_set_layer_state(L_3, layer_state_cmp(state, layer3));
        rgblight_set_layer_state(L_4, layer_state_cmp(state, layer4));
    }
    rgblight_set_layer_state(L_5, layer_state_cmp(state, layer5));
    return state;
}

// // This function is called when num lock indicators (num lock led) are changed/toggled/updated
// bool led_update_user(led_t led_state) {
//     rgblight_set_layer_state(L_NUMLOCK, led_state.num_lock);
//     return true;
// }


#endif