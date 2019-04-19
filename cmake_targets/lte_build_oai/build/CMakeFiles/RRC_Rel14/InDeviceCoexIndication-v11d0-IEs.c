/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#include "InDeviceCoexIndication-v11d0-IEs.h"

static asn_TYPE_member_t asn_MBR_ul_CA_AssistanceInfo_r11_2[] = {
	{ ATF_POINTER, 1, offsetof(struct InDeviceCoexIndication_v11d0_IEs__ul_CA_AssistanceInfo_r11, affectedCarrierFreqCombList_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AffectedCarrierFreqCombList_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"affectedCarrierFreqCombList-r11"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct InDeviceCoexIndication_v11d0_IEs__ul_CA_AssistanceInfo_r11, victimSystemType_r11),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_VictimSystemType_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"victimSystemType-r11"
		},
};
static const int asn_MAP_ul_CA_AssistanceInfo_r11_oms_2[] = { 0 };
static const ber_tlv_tag_t asn_DEF_ul_CA_AssistanceInfo_r11_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ul_CA_AssistanceInfo_r11_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* affectedCarrierFreqCombList-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* victimSystemType-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ul_CA_AssistanceInfo_r11_specs_2 = {
	sizeof(struct InDeviceCoexIndication_v11d0_IEs__ul_CA_AssistanceInfo_r11),
	offsetof(struct InDeviceCoexIndication_v11d0_IEs__ul_CA_AssistanceInfo_r11, _asn_ctx),
	asn_MAP_ul_CA_AssistanceInfo_r11_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_ul_CA_AssistanceInfo_r11_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_CA_AssistanceInfo_r11_2 = {
	"ul-CA-AssistanceInfo-r11",
	"ul-CA-AssistanceInfo-r11",
	&asn_OP_SEQUENCE,
	asn_DEF_ul_CA_AssistanceInfo_r11_tags_2,
	sizeof(asn_DEF_ul_CA_AssistanceInfo_r11_tags_2)
		/sizeof(asn_DEF_ul_CA_AssistanceInfo_r11_tags_2[0]) - 1, /* 1 */
	asn_DEF_ul_CA_AssistanceInfo_r11_tags_2,	/* Same as above */
	sizeof(asn_DEF_ul_CA_AssistanceInfo_r11_tags_2)
		/sizeof(asn_DEF_ul_CA_AssistanceInfo_r11_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ul_CA_AssistanceInfo_r11_2,
	2,	/* Elements count */
	&asn_SPC_ul_CA_AssistanceInfo_r11_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_InDeviceCoexIndication_v11d0_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct InDeviceCoexIndication_v11d0_IEs, ul_CA_AssistanceInfo_r11),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ul_CA_AssistanceInfo_r11_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CA-AssistanceInfo-r11"
		},
	{ ATF_POINTER, 1, offsetof(struct InDeviceCoexIndication_v11d0_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InDeviceCoexIndication_v1310_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_InDeviceCoexIndication_v11d0_IEs_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_InDeviceCoexIndication_v11d0_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_InDeviceCoexIndication_v11d0_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CA-AssistanceInfo-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_InDeviceCoexIndication_v11d0_IEs_specs_1 = {
	sizeof(struct InDeviceCoexIndication_v11d0_IEs),
	offsetof(struct InDeviceCoexIndication_v11d0_IEs, _asn_ctx),
	asn_MAP_InDeviceCoexIndication_v11d0_IEs_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_InDeviceCoexIndication_v11d0_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_InDeviceCoexIndication_v11d0_IEs = {
	"InDeviceCoexIndication-v11d0-IEs",
	"InDeviceCoexIndication-v11d0-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_InDeviceCoexIndication_v11d0_IEs_tags_1,
	sizeof(asn_DEF_InDeviceCoexIndication_v11d0_IEs_tags_1)
		/sizeof(asn_DEF_InDeviceCoexIndication_v11d0_IEs_tags_1[0]), /* 1 */
	asn_DEF_InDeviceCoexIndication_v11d0_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_InDeviceCoexIndication_v11d0_IEs_tags_1)
		/sizeof(asn_DEF_InDeviceCoexIndication_v11d0_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_InDeviceCoexIndication_v11d0_IEs_1,
	2,	/* Elements count */
	&asn_SPC_InDeviceCoexIndication_v11d0_IEs_specs_1	/* Additional specs */
};
