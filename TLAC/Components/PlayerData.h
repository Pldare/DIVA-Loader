#pragma once
#include <stdint.h>

struct PlayerData
{
	int8_t use_card;
	int8_t freeplay;
	int8_t field_2;
	int8_t field_3;
	int32_t card_type;
	int32_t field_8;
	int32_t field_C;
	int32_t field_10;
	int32_t field_14;
	int32_t field_18;
	int32_t field_1C;
	int32_t field_20;
	int32_t field_24;
	int32_t field_28;
	int32_t field_2C;
	int32_t field_30;
	int32_t field_34;
	int32_t field_38;
	int32_t field_3C;
	int32_t field_40;
	int32_t field_44;
	int32_t field_48;
	int32_t field_4C;
	int32_t field_50;
	int32_t field_54;
	int32_t field_58;
	int32_t field_5C;
	int32_t field_60;
	int32_t field_64;
	int32_t field_68;
	int32_t field_6C;
	int32_t field_70;
	int32_t field_74;
	int32_t field_78;
	int32_t field_7C;
	int32_t field_80;
	int32_t field_84;
	int32_t field_88;
	int32_t field_8C;
	int32_t field_90;
	int32_t field_94;
	int32_t field_98;
	int32_t field_9C;
	int32_t field_A0;
	int32_t field_A4;
	int32_t field_A8;
	int32_t field_AC;
	int32_t field_B0;
	int32_t field_B4;
	int32_t field_B8;
	int32_t field_BC;
	int32_t field_C0;
	int32_t field_C4;
	int32_t field_C8;
	int32_t field_CC;
	int32_t play_data_id;
	int32_t accept_index;
	int32_t start_index;
	int32_t field_DC;
	char* player_name;
	int32_t field_E8;
	int32_t field_EC;
	int32_t field_F0;
	int32_t field_F4;
	int32_t field_F8;
	int32_t field_FC;
	char* level_name;
	int32_t field_108;
	int32_t field_10C;
	int32_t field_110;
	int32_t field_114;
	int32_t field_118;
	int32_t field_11C;
	int32_t field_120;
	int32_t level_plate_id;
	int32_t field_128;
	int32_t vocaloid_point;
	int32_t hp_vol;
	int32_t act_toggle;
	int32_t act_vol;
	int32_t act_slide_vol;
	int32_t field_140;
	int32_t field_144;
	int32_t field_148;
	int32_t field_14C;
	int32_t field_150;
	int32_t field_154;
	int32_t field_158;
	int32_t field_15C;
	int32_t field_160;
	int32_t field_164;
	int32_t field_168;
	int32_t field_16C;
	int32_t field_170;
	int32_t field_174;
	int32_t field_178;
	int32_t field_17C;
	int32_t field_180;
	int32_t field_184;
	int32_t field_188;
	int32_t field_18C;
	int32_t field_190;
	int32_t field_194;
	int32_t field_198;
	int32_t field_19C;
	int32_t field_1A0;
	int32_t field_1A4;
	int32_t field_1A8;
	int32_t field_1AC;
	int32_t field_1B0;
	int32_t field_1B4;
	int32_t field_1B8;
	int32_t field_1BC;
	int32_t field_1C0;
	int32_t field_1C4;
	int32_t field_1C8;
	int32_t field_1CC;
	int32_t field_1D0;
	int32_t field_1D4;
	int32_t field_1D8;
	int32_t field_1DC;
	int32_t field_1E0;
	int32_t field_1E4;
	int32_t field_1E8;
	int32_t field_1EC;
	int32_t field_1F0;
	int32_t field_1F4;
	int32_t field_1F8;
	int32_t field_1FC;
	int32_t field_200;
	int32_t field_204;
	int32_t field_208;
	int32_t field_20C;
	int32_t field_210;
	int32_t field_214;
	int32_t field_218;
	int32_t field_21C;
	int32_t field_220;
	int32_t field_224;
	int32_t field_228;
	int32_t field_22C;
	int32_t field_230;
	int32_t field_234;
	int32_t field_238;
	int32_t field_23C;
	int32_t field_240;
	int32_t field_244;
	int32_t field_248;
	int32_t field_24C;
	int32_t field_250;
	int32_t field_254;
	int32_t field_258;
	int32_t field_25C;
	int32_t field_260;
	int32_t field_264;
	int32_t field_268;
	int32_t field_26C;
	int32_t field_270;
	int32_t field_274;
	int32_t field_278;
	int32_t field_27C;
	int32_t field_280;
	int32_t field_284;
	int32_t field_288;
	int32_t field_28C;
	int32_t field_290;
	int32_t field_294;
	int32_t field_298;
	int32_t field_29C;
	int32_t field_2A0;
	int32_t field_2A4;
	int32_t field_2A8;
	int32_t field_2AC;
	int8_t use_pv_module_equip;
	int8_t ch_pv_module_equip;
	int8_t field_2B2;
	int8_t field_2B3;
	int32_t module_filter_kind;
	int32_t field_2B8;
	int32_t field_2BC;
	int32_t field_2C0;
	int32_t field_2C4;
	int32_t field_2C8;
	int32_t field_2CC;
	int32_t field_2D0;
	int32_t field_2D4;
	int32_t field_2D8;
	int32_t field_2DC;
	int32_t field_2E0;
	int32_t field_2E4;
	int32_t field_2E8;
	int32_t field_2EC;
	int32_t field_2F0;
	int32_t field_2F4;
	int32_t field_2F8;
	int32_t field_2FC;
	int32_t field_300;
	int32_t field_304;
	int32_t field_308;
	int32_t field_30C;
	int32_t field_310;
	int32_t field_314;
	int32_t field_318;
	int32_t field_31C;
	int32_t field_320;
	int32_t field_324;
	int32_t field_328;
	int32_t field_32C;
	int32_t field_330;
	int32_t field_334;
	int32_t field_338;
	int32_t field_33C;
	int32_t field_340;
	int32_t field_344;
	int32_t field_348;
	int32_t field_34C;
	int32_t field_350;
	int32_t field_354;
	int32_t field_358;
	int32_t field_35C;
	int32_t field_360;
	int32_t field_364;
	int32_t field_368;
	int32_t field_36C;
	int32_t field_370;
	int32_t field_374;
	int32_t field_378;
	int32_t field_37C;
	int32_t field_380;
	int32_t field_384;
	int32_t field_388;
	int32_t field_38C;
	int32_t field_390;
	int32_t field_394;
	int32_t field_398;
	int32_t field_39C;
	int32_t field_3A0;
	int32_t field_3A4;
	int32_t field_3A8;
	int32_t field_3AC;
	int32_t field_3B0;
	int32_t field_3B4;
	int32_t field_3B8;
	int32_t field_3BC;
	int32_t field_3C0;
	int32_t field_3C4;
	int32_t field_3C8;
	int32_t field_3CC;
	int32_t field_3D0;
	int32_t field_3D4;
	int32_t field_3D8;
	int32_t field_3DC;
	int32_t field_3E0;
	int32_t field_3E4;
	int32_t field_3E8;
	int32_t field_3EC;
	int32_t field_3F0;
	int32_t field_3F4;
	int32_t field_3F8;
	int32_t field_3FC;
	int32_t field_400;
	int32_t field_404;
	int32_t field_408;
	int32_t field_40C;
	int32_t field_410;
	int32_t field_414;
	int32_t field_418;
	int32_t field_41C;
	int32_t field_420;
	int32_t field_424;
	int32_t field_428;
	int32_t field_42C;
	int32_t field_430;
	int32_t field_434;
	int32_t field_438;
	int32_t field_43C;
	int32_t field_440;
	int32_t field_444;
	int32_t field_448;
	int32_t field_44C;
	int32_t field_450;
	int32_t field_454;
	int32_t field_458;
	int32_t field_45C;
	int32_t field_460;
	int32_t field_464;
	int32_t field_468;
	int32_t field_46C;
	int32_t field_470;
	int32_t field_474;
	int32_t field_478;
	int32_t field_47C;
	int32_t field_480;
	int32_t field_484;
	int32_t field_488;
	int32_t field_48C;
	int32_t field_490;
	int32_t field_494;
	int32_t field_498;
	int32_t field_49C;
	int32_t field_4A0;
	int32_t field_4A4;
	int32_t field_4A8;
	int32_t field_4AC;
	int32_t field_4B0;
	int32_t field_4B4;
	int32_t field_4B8;
	int32_t field_4BC;
	int32_t field_4C0;
	int32_t field_4C4;
	int32_t field_4C8;
	int32_t field_4CC;
	int32_t field_4D0;
	int32_t field_4D4;
	int32_t field_4D8;
	int32_t field_4DC;
	int32_t field_4E0;
	int32_t field_4E4;
	int32_t field_4E8;
	int32_t field_4EC;
	int32_t field_4F0;
	int32_t field_4F4;
	int32_t field_4F8;
	int32_t field_4FC;
	int32_t field_500;
	int32_t field_504;
	int32_t field_508;
	int32_t field_50C;
	int32_t field_510;
	int32_t field_514;
	int32_t field_518;
	int32_t field_51C;
	int32_t field_520;
	int32_t field_524;
	int32_t field_528;
	int32_t field_52C;
	int32_t field_530;
	int32_t field_534;
	int32_t field_538;
	int32_t field_53C;
	int32_t field_540;
	int32_t field_544;
	int32_t skin_equip;
	int32_t skin_equip_cmn;
	int32_t use_pv_skin_equip;
	int32_t btn_se_equip;
	int32_t btn_se_equip_cmn;
	int32_t use_pv_btn_se_equip;
	int32_t slide_se_equip;
	int32_t slide_se_equip_cmn;
	int32_t use_pv_slide_se_equip;
	int32_t chainslide_se_equip;
	int32_t chainslide_se_equip_cmn;
	int32_t use_pv_chainslide_se_equip;
	int32_t slidertouch_se_equip;
	int32_t slidertouch_se_equip_cmn;
	int32_t use_pv_slidertouch_se_equip;
	int32_t field_584;
	int32_t field_588;
	int32_t field_58C;
	int32_t field_590;
	int32_t field_594;
	int32_t field_598;
	int32_t field_59C;
	int32_t field_5A0;
	int32_t field_5A4;
	int32_t field_5A8;
	int32_t field_5AC;
	int32_t field_5B0;
	int32_t field_5B4;
	int32_t field_5B8;
	int32_t field_5BC;
	int32_t field_5C0;
	int32_t field_5C4;
	int32_t field_5C8;
	int32_t field_5CC;
	int32_t field_5D0;
	int32_t field_5D4;
	int32_t field_5D8;
	int32_t field_5DC;
	int32_t field_5E0;
	int32_t field_5E4;
	int32_t field_5E8;
	int32_t field_5EC;
	int32_t field_5F0;
	int32_t field_5F4;
	int32_t field_5F8;
	int32_t field_5FC;
	int32_t field_600;
	int32_t field_604;
	int32_t field_608;
	int32_t field_60C;
	int32_t field_610;
	int32_t field_614;
	int32_t field_618;
	int32_t field_61C;
	int32_t field_620;
	int32_t field_624;
	int32_t field_628;
	int32_t field_62C;
	int32_t field_630;
};