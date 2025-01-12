/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "OtherConfig-r9.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_bw_PreferenceIndicationTimer_r14_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_delayBudgetReportingProhibitTimer_r14_constr_30 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_delayBudgetReportingConfig_r14_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_rlmReportTimer_r14_constr_42 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_rlmReportRep_MPDCCH_r14_constr_59 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_rlm_ReportConfig_r14_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_overheatingIndicationProhibitTimer_r14_constr_65 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_overheatingAssistanceConfig_r14_constr_62 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ext1_4[] = {
	{ ATF_POINTER, 3, offsetof(struct OtherConfig_r9__ext1, idc_Config_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IDC_Config_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"idc-Config-r11"
		},
	{ ATF_POINTER, 2, offsetof(struct OtherConfig_r9__ext1, powerPrefIndicationConfig_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PowerPrefIndicationConfig_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerPrefIndicationConfig-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct OtherConfig_r9__ext1, obtainLocationConfig_r11),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ObtainLocationConfig_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"obtainLocationConfig-r11"
		},
};
static const int asn_MAP_ext1_oms_4[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_ext1_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext1_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* idc-Config-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* powerPrefIndicationConfig-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* obtainLocationConfig-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext1_specs_4 = {
	sizeof(struct OtherConfig_r9__ext1),
	offsetof(struct OtherConfig_r9__ext1, _asn_ctx),
	asn_MAP_ext1_tag2el_4,
	3,	/* Count of tags in the map */
	asn_MAP_ext1_oms_4,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext1_4 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_ext1_tags_4,
	sizeof(asn_DEF_ext1_tags_4)
		/sizeof(asn_DEF_ext1_tags_4[0]) - 1, /* 1 */
	asn_DEF_ext1_tags_4,	/* Same as above */
	sizeof(asn_DEF_ext1_tags_4)
		/sizeof(asn_DEF_ext1_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext1_4,
	3,	/* Elements count */
	&asn_SPC_ext1_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_bw_PreferenceIndicationTimer_r14_value2enum_9[] = {
	{ 0,	2,	"s0" },
	{ 1,	6,	"s0dot5" },
	{ 2,	2,	"s1" },
	{ 3,	2,	"s2" },
	{ 4,	2,	"s5" },
	{ 5,	3,	"s10" },
	{ 6,	3,	"s20" },
	{ 7,	3,	"s30" },
	{ 8,	3,	"s60" },
	{ 9,	3,	"s90" },
	{ 10,	4,	"s120" },
	{ 11,	4,	"s300" },
	{ 12,	4,	"s600" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_bw_PreferenceIndicationTimer_r14_enum2value_9[] = {
	0,	/* s0(0) */
	1,	/* s0dot5(1) */
	2,	/* s1(2) */
	5,	/* s10(5) */
	10,	/* s120(10) */
	3,	/* s2(3) */
	6,	/* s20(6) */
	7,	/* s30(7) */
	11,	/* s300(11) */
	4,	/* s5(4) */
	8,	/* s60(8) */
	12,	/* s600(12) */
	9,	/* s90(9) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13	/* spare3(13) */
};
static const asn_INTEGER_specifics_t asn_SPC_bw_PreferenceIndicationTimer_r14_specs_9 = {
	asn_MAP_bw_PreferenceIndicationTimer_r14_value2enum_9,	/* "tag" => N; sorted by tag */
	asn_MAP_bw_PreferenceIndicationTimer_r14_enum2value_9,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_bw_PreferenceIndicationTimer_r14_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bw_PreferenceIndicationTimer_r14_9 = {
	"bw-PreferenceIndicationTimer-r14",
	"bw-PreferenceIndicationTimer-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_bw_PreferenceIndicationTimer_r14_tags_9,
	sizeof(asn_DEF_bw_PreferenceIndicationTimer_r14_tags_9)
		/sizeof(asn_DEF_bw_PreferenceIndicationTimer_r14_tags_9[0]) - 1, /* 1 */
	asn_DEF_bw_PreferenceIndicationTimer_r14_tags_9,	/* Same as above */
	sizeof(asn_DEF_bw_PreferenceIndicationTimer_r14_tags_9)
		/sizeof(asn_DEF_bw_PreferenceIndicationTimer_r14_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_bw_PreferenceIndicationTimer_r14_constr_9, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_bw_PreferenceIndicationTimer_r14_specs_9	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_delayBudgetReportingProhibitTimer_r14_value2enum_30[] = {
	{ 0,	2,	"s0" },
	{ 1,	6,	"s0dot4" },
	{ 2,	6,	"s0dot8" },
	{ 3,	6,	"s1dot6" },
	{ 4,	2,	"s3" },
	{ 5,	2,	"s6" },
	{ 6,	3,	"s12" },
	{ 7,	3,	"s30" }
};
static const unsigned int asn_MAP_delayBudgetReportingProhibitTimer_r14_enum2value_30[] = {
	0,	/* s0(0) */
	1,	/* s0dot4(1) */
	2,	/* s0dot8(2) */
	6,	/* s12(6) */
	3,	/* s1dot6(3) */
	4,	/* s3(4) */
	7,	/* s30(7) */
	5	/* s6(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_delayBudgetReportingProhibitTimer_r14_specs_30 = {
	asn_MAP_delayBudgetReportingProhibitTimer_r14_value2enum_30,	/* "tag" => N; sorted by tag */
	asn_MAP_delayBudgetReportingProhibitTimer_r14_enum2value_30,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_delayBudgetReportingProhibitTimer_r14_tags_30[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_delayBudgetReportingProhibitTimer_r14_30 = {
	"delayBudgetReportingProhibitTimer-r14",
	"delayBudgetReportingProhibitTimer-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_delayBudgetReportingProhibitTimer_r14_tags_30,
	sizeof(asn_DEF_delayBudgetReportingProhibitTimer_r14_tags_30)
		/sizeof(asn_DEF_delayBudgetReportingProhibitTimer_r14_tags_30[0]) - 1, /* 1 */
	asn_DEF_delayBudgetReportingProhibitTimer_r14_tags_30,	/* Same as above */
	sizeof(asn_DEF_delayBudgetReportingProhibitTimer_r14_tags_30)
		/sizeof(asn_DEF_delayBudgetReportingProhibitTimer_r14_tags_30[0]), /* 2 */
	{ 0, &asn_PER_type_delayBudgetReportingProhibitTimer_r14_constr_30, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_delayBudgetReportingProhibitTimer_r14_specs_30	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_29[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup, delayBudgetReportingProhibitTimer_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_delayBudgetReportingProhibitTimer_r14_30,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"delayBudgetReportingProhibitTimer-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_29[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* delayBudgetReportingProhibitTimer-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_29 = {
	sizeof(struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup),
	offsetof(struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14__setup, _asn_ctx),
	asn_MAP_setup_tag2el_29,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_29 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_29,
	sizeof(asn_DEF_setup_tags_29)
		/sizeof(asn_DEF_setup_tags_29[0]) - 1, /* 1 */
	asn_DEF_setup_tags_29,	/* Same as above */
	sizeof(asn_DEF_setup_tags_29)
		/sizeof(asn_DEF_setup_tags_29[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_29,
	1,	/* Elements count */
	&asn_SPC_setup_specs_29	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_delayBudgetReportingConfig_r14_27[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_delayBudgetReportingConfig_r14_tag2el_27[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_delayBudgetReportingConfig_r14_specs_27 = {
	sizeof(struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14),
	offsetof(struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14, _asn_ctx),
	offsetof(struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14, present),
	sizeof(((struct OtherConfig_r9__ext2__delayBudgetReportingConfig_r14 *)0)->present),
	asn_MAP_delayBudgetReportingConfig_r14_tag2el_27,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_delayBudgetReportingConfig_r14_27 = {
	"delayBudgetReportingConfig-r14",
	"delayBudgetReportingConfig-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_delayBudgetReportingConfig_r14_constr_27, CHOICE_constraint },
	asn_MBR_delayBudgetReportingConfig_r14_27,
	2,	/* Elements count */
	&asn_SPC_delayBudgetReportingConfig_r14_specs_27	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rlmReportTimer_r14_value2enum_42[] = {
	{ 0,	2,	"s0" },
	{ 1,	6,	"s0dot5" },
	{ 2,	2,	"s1" },
	{ 3,	2,	"s2" },
	{ 4,	2,	"s5" },
	{ 5,	3,	"s10" },
	{ 6,	3,	"s20" },
	{ 7,	3,	"s30" },
	{ 8,	3,	"s60" },
	{ 9,	3,	"s90" },
	{ 10,	4,	"s120" },
	{ 11,	4,	"s300" },
	{ 12,	4,	"s600" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_rlmReportTimer_r14_enum2value_42[] = {
	0,	/* s0(0) */
	1,	/* s0dot5(1) */
	2,	/* s1(2) */
	5,	/* s10(5) */
	10,	/* s120(10) */
	3,	/* s2(3) */
	6,	/* s20(6) */
	7,	/* s30(7) */
	11,	/* s300(11) */
	4,	/* s5(4) */
	8,	/* s60(8) */
	12,	/* s600(12) */
	9,	/* s90(9) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13	/* spare3(13) */
};
static const asn_INTEGER_specifics_t asn_SPC_rlmReportTimer_r14_specs_42 = {
	asn_MAP_rlmReportTimer_r14_value2enum_42,	/* "tag" => N; sorted by tag */
	asn_MAP_rlmReportTimer_r14_enum2value_42,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rlmReportTimer_r14_tags_42[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlmReportTimer_r14_42 = {
	"rlmReportTimer-r14",
	"rlmReportTimer-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_rlmReportTimer_r14_tags_42,
	sizeof(asn_DEF_rlmReportTimer_r14_tags_42)
		/sizeof(asn_DEF_rlmReportTimer_r14_tags_42[0]) - 1, /* 1 */
	asn_DEF_rlmReportTimer_r14_tags_42,	/* Same as above */
	sizeof(asn_DEF_rlmReportTimer_r14_tags_42)
		/sizeof(asn_DEF_rlmReportTimer_r14_tags_42[0]), /* 2 */
	{ 0, &asn_PER_type_rlmReportTimer_r14_constr_42, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlmReportTimer_r14_specs_42	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_rlmReportRep_MPDCCH_r14_value2enum_59[] = {
	{ 0,	5,	"setup" }
};
static const unsigned int asn_MAP_rlmReportRep_MPDCCH_r14_enum2value_59[] = {
	0	/* setup(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_rlmReportRep_MPDCCH_r14_specs_59 = {
	asn_MAP_rlmReportRep_MPDCCH_r14_value2enum_59,	/* "tag" => N; sorted by tag */
	asn_MAP_rlmReportRep_MPDCCH_r14_enum2value_59,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_rlmReportRep_MPDCCH_r14_tags_59[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlmReportRep_MPDCCH_r14_59 = {
	"rlmReportRep-MPDCCH-r14",
	"rlmReportRep-MPDCCH-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_rlmReportRep_MPDCCH_r14_tags_59,
	sizeof(asn_DEF_rlmReportRep_MPDCCH_r14_tags_59)
		/sizeof(asn_DEF_rlmReportRep_MPDCCH_r14_tags_59[0]) - 1, /* 1 */
	asn_DEF_rlmReportRep_MPDCCH_r14_tags_59,	/* Same as above */
	sizeof(asn_DEF_rlmReportRep_MPDCCH_r14_tags_59)
		/sizeof(asn_DEF_rlmReportRep_MPDCCH_r14_tags_59[0]), /* 2 */
	{ 0, &asn_PER_type_rlmReportRep_MPDCCH_r14_constr_59, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_rlmReportRep_MPDCCH_r14_specs_59	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_41[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup, rlmReportTimer_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlmReportTimer_r14_42,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlmReportTimer-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup, rlmReportRep_MPDCCH_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_rlmReportRep_MPDCCH_r14_59,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlmReportRep-MPDCCH-r14"
		},
};
static const int asn_MAP_setup_oms_41[] = { 1 };
static const ber_tlv_tag_t asn_DEF_setup_tags_41[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_41[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rlmReportTimer-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* rlmReportRep-MPDCCH-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_41 = {
	sizeof(struct OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup),
	offsetof(struct OtherConfig_r9__ext2__rlm_ReportConfig_r14__setup, _asn_ctx),
	asn_MAP_setup_tag2el_41,
	2,	/* Count of tags in the map */
	asn_MAP_setup_oms_41,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_41 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_41,
	sizeof(asn_DEF_setup_tags_41)
		/sizeof(asn_DEF_setup_tags_41[0]) - 1, /* 1 */
	asn_DEF_setup_tags_41,	/* Same as above */
	sizeof(asn_DEF_setup_tags_41)
		/sizeof(asn_DEF_setup_tags_41[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_41,
	2,	/* Elements count */
	&asn_SPC_setup_specs_41	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_rlm_ReportConfig_r14_39[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OtherConfig_r9__ext2__rlm_ReportConfig_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OtherConfig_r9__ext2__rlm_ReportConfig_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_41,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_rlm_ReportConfig_r14_tag2el_39[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_rlm_ReportConfig_r14_specs_39 = {
	sizeof(struct OtherConfig_r9__ext2__rlm_ReportConfig_r14),
	offsetof(struct OtherConfig_r9__ext2__rlm_ReportConfig_r14, _asn_ctx),
	offsetof(struct OtherConfig_r9__ext2__rlm_ReportConfig_r14, present),
	sizeof(((struct OtherConfig_r9__ext2__rlm_ReportConfig_r14 *)0)->present),
	asn_MAP_rlm_ReportConfig_r14_tag2el_39,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_rlm_ReportConfig_r14_39 = {
	"rlm-ReportConfig-r14",
	"rlm-ReportConfig-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_rlm_ReportConfig_r14_constr_39, CHOICE_constraint },
	asn_MBR_rlm_ReportConfig_r14_39,
	2,	/* Elements count */
	&asn_SPC_rlm_ReportConfig_r14_specs_39	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext2_8[] = {
	{ ATF_POINTER, 4, offsetof(struct OtherConfig_r9__ext2, bw_PreferenceIndicationTimer_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bw_PreferenceIndicationTimer_r14_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bw-PreferenceIndicationTimer-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct OtherConfig_r9__ext2, sps_AssistanceInfoReport_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-AssistanceInfoReport-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct OtherConfig_r9__ext2, delayBudgetReportingConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_delayBudgetReportingConfig_r14_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"delayBudgetReportingConfig-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct OtherConfig_r9__ext2, rlm_ReportConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_rlm_ReportConfig_r14_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlm-ReportConfig-r14"
		},
};
static const int asn_MAP_ext2_oms_8[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_ext2_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext2_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bw-PreferenceIndicationTimer-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sps-AssistanceInfoReport-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* delayBudgetReportingConfig-r14 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* rlm-ReportConfig-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext2_specs_8 = {
	sizeof(struct OtherConfig_r9__ext2),
	offsetof(struct OtherConfig_r9__ext2, _asn_ctx),
	asn_MAP_ext2_tag2el_8,
	4,	/* Count of tags in the map */
	asn_MAP_ext2_oms_8,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext2_8 = {
	"ext2",
	"ext2",
	&asn_OP_SEQUENCE,
	asn_DEF_ext2_tags_8,
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]) - 1, /* 1 */
	asn_DEF_ext2_tags_8,	/* Same as above */
	sizeof(asn_DEF_ext2_tags_8)
		/sizeof(asn_DEF_ext2_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext2_8,
	4,	/* Elements count */
	&asn_SPC_ext2_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_overheatingIndicationProhibitTimer_r14_value2enum_65[] = {
	{ 0,	2,	"s0" },
	{ 1,	6,	"s0dot5" },
	{ 2,	2,	"s1" },
	{ 3,	2,	"s2" },
	{ 4,	2,	"s5" },
	{ 5,	3,	"s10" },
	{ 6,	3,	"s20" },
	{ 7,	3,	"s30" },
	{ 8,	3,	"s60" },
	{ 9,	3,	"s90" },
	{ 10,	4,	"s120" },
	{ 11,	4,	"s300" },
	{ 12,	4,	"s600" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
};
static const unsigned int asn_MAP_overheatingIndicationProhibitTimer_r14_enum2value_65[] = {
	0,	/* s0(0) */
	1,	/* s0dot5(1) */
	2,	/* s1(2) */
	5,	/* s10(5) */
	10,	/* s120(10) */
	3,	/* s2(3) */
	6,	/* s20(6) */
	7,	/* s30(7) */
	11,	/* s300(11) */
	4,	/* s5(4) */
	8,	/* s60(8) */
	12,	/* s600(12) */
	9,	/* s90(9) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13	/* spare3(13) */
};
static const asn_INTEGER_specifics_t asn_SPC_overheatingIndicationProhibitTimer_r14_specs_65 = {
	asn_MAP_overheatingIndicationProhibitTimer_r14_value2enum_65,	/* "tag" => N; sorted by tag */
	asn_MAP_overheatingIndicationProhibitTimer_r14_enum2value_65,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_overheatingIndicationProhibitTimer_r14_tags_65[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_overheatingIndicationProhibitTimer_r14_65 = {
	"overheatingIndicationProhibitTimer-r14",
	"overheatingIndicationProhibitTimer-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_overheatingIndicationProhibitTimer_r14_tags_65,
	sizeof(asn_DEF_overheatingIndicationProhibitTimer_r14_tags_65)
		/sizeof(asn_DEF_overheatingIndicationProhibitTimer_r14_tags_65[0]) - 1, /* 1 */
	asn_DEF_overheatingIndicationProhibitTimer_r14_tags_65,	/* Same as above */
	sizeof(asn_DEF_overheatingIndicationProhibitTimer_r14_tags_65)
		/sizeof(asn_DEF_overheatingIndicationProhibitTimer_r14_tags_65[0]), /* 2 */
	{ 0, &asn_PER_type_overheatingIndicationProhibitTimer_r14_constr_65, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_overheatingIndicationProhibitTimer_r14_specs_65	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_64[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup, overheatingIndicationProhibitTimer_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_overheatingIndicationProhibitTimer_r14_65,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"overheatingIndicationProhibitTimer-r14"
		},
};
static const ber_tlv_tag_t asn_DEF_setup_tags_64[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_setup_tag2el_64[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* overheatingIndicationProhibitTimer-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_setup_specs_64 = {
	sizeof(struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup),
	offsetof(struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14__setup, _asn_ctx),
	asn_MAP_setup_tag2el_64,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_64 = {
	"setup",
	"setup",
	&asn_OP_SEQUENCE,
	asn_DEF_setup_tags_64,
	sizeof(asn_DEF_setup_tags_64)
		/sizeof(asn_DEF_setup_tags_64[0]) - 1, /* 1 */
	asn_DEF_setup_tags_64,	/* Same as above */
	sizeof(asn_DEF_setup_tags_64)
		/sizeof(asn_DEF_setup_tags_64[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_setup_64,
	1,	/* Elements count */
	&asn_SPC_setup_specs_64	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_overheatingAssistanceConfig_r14_62[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_setup_64,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_overheatingAssistanceConfig_r14_tag2el_62[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
static asn_CHOICE_specifics_t asn_SPC_overheatingAssistanceConfig_r14_specs_62 = {
	sizeof(struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14),
	offsetof(struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14, _asn_ctx),
	offsetof(struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14, present),
	sizeof(((struct OtherConfig_r9__ext3__overheatingAssistanceConfig_r14 *)0)->present),
	asn_MAP_overheatingAssistanceConfig_r14_tag2el_62,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_overheatingAssistanceConfig_r14_62 = {
	"overheatingAssistanceConfig-r14",
	"overheatingAssistanceConfig-r14",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_overheatingAssistanceConfig_r14_constr_62, CHOICE_constraint },
	asn_MBR_overheatingAssistanceConfig_r14_62,
	2,	/* Elements count */
	&asn_SPC_overheatingAssistanceConfig_r14_specs_62	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ext3_61[] = {
	{ ATF_POINTER, 1, offsetof(struct OtherConfig_r9__ext3, overheatingAssistanceConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_overheatingAssistanceConfig_r14_62,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"overheatingAssistanceConfig-r14"
		},
};
static const int asn_MAP_ext3_oms_61[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ext3_tags_61[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ext3_tag2el_61[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* overheatingAssistanceConfig-r14 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ext3_specs_61 = {
	sizeof(struct OtherConfig_r9__ext3),
	offsetof(struct OtherConfig_r9__ext3, _asn_ctx),
	asn_MAP_ext3_tag2el_61,
	1,	/* Count of tags in the map */
	asn_MAP_ext3_oms_61,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ext3_61 = {
	"ext3",
	"ext3",
	&asn_OP_SEQUENCE,
	asn_DEF_ext3_tags_61,
	sizeof(asn_DEF_ext3_tags_61)
		/sizeof(asn_DEF_ext3_tags_61[0]) - 1, /* 1 */
	asn_DEF_ext3_tags_61,	/* Same as above */
	sizeof(asn_DEF_ext3_tags_61)
		/sizeof(asn_DEF_ext3_tags_61[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ext3_61,
	1,	/* Elements count */
	&asn_SPC_ext3_specs_61	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_OtherConfig_r9_1[] = {
	{ ATF_POINTER, 4, offsetof(struct OtherConfig_r9, reportProximityConfig_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ReportProximityConfig_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportProximityConfig-r9"
		},
	{ ATF_POINTER, 3, offsetof(struct OtherConfig_r9, ext1),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ext1_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
	{ ATF_POINTER, 2, offsetof(struct OtherConfig_r9, ext2),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ext2_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext2"
		},
	{ ATF_POINTER, 1, offsetof(struct OtherConfig_r9, ext3),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_ext3_61,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext3"
		},
};
static const int asn_MAP_OtherConfig_r9_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_OtherConfig_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_OtherConfig_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reportProximityConfig-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ext1 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ext2 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext3 */
};
asn_SEQUENCE_specifics_t asn_SPC_OtherConfig_r9_specs_1 = {
	sizeof(struct OtherConfig_r9),
	offsetof(struct OtherConfig_r9, _asn_ctx),
	asn_MAP_OtherConfig_r9_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_OtherConfig_r9_oms_1,	/* Optional members */
	1, 3,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_OtherConfig_r9 = {
	"OtherConfig-r9",
	"OtherConfig-r9",
	&asn_OP_SEQUENCE,
	asn_DEF_OtherConfig_r9_tags_1,
	sizeof(asn_DEF_OtherConfig_r9_tags_1)
		/sizeof(asn_DEF_OtherConfig_r9_tags_1[0]), /* 1 */
	asn_DEF_OtherConfig_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_OtherConfig_r9_tags_1)
		/sizeof(asn_DEF_OtherConfig_r9_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_OtherConfig_r9_1,
	4,	/* Elements count */
	&asn_SPC_OtherConfig_r9_specs_1	/* Additional specs */
};

