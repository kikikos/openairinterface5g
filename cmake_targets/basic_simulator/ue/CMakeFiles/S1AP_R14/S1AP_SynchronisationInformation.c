/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R14/s1ap-14.5.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/S1AP_R14`
 */

#include "S1AP_SynchronisationInformation.h"

#include "S1AP_ListeningSubframePattern.h"
#include "S1AP_ECGI-List.h"
#include "S1AP_ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_S1AP_SynchronisationInformation_1[] = {
	{ ATF_POINTER, 4, offsetof(struct S1AP_SynchronisationInformation, sourceStratumLevel),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_StratumLevel,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceStratumLevel"
		},
	{ ATF_POINTER, 3, offsetof(struct S1AP_SynchronisationInformation, listeningSubframePattern),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ListeningSubframePattern,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"listeningSubframePattern"
		},
	{ ATF_POINTER, 2, offsetof(struct S1AP_SynchronisationInformation, aggressoreCGI_List),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ECGI_List,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"aggressoreCGI-List"
		},
	{ ATF_POINTER, 1, offsetof(struct S1AP_SynchronisationInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1AP_ProtocolExtensionContainer_6628P90,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1AP_SynchronisationInformation_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_S1AP_SynchronisationInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1AP_SynchronisationInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceStratumLevel */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* listeningSubframePattern */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* aggressoreCGI-List */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1AP_SynchronisationInformation_specs_1 = {
	sizeof(struct S1AP_SynchronisationInformation),
	offsetof(struct S1AP_SynchronisationInformation, _asn_ctx),
	asn_MAP_S1AP_SynchronisationInformation_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_S1AP_SynchronisationInformation_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1AP_SynchronisationInformation = {
	"SynchronisationInformation",
	"SynchronisationInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_S1AP_SynchronisationInformation_tags_1,
	sizeof(asn_DEF_S1AP_SynchronisationInformation_tags_1)
		/sizeof(asn_DEF_S1AP_SynchronisationInformation_tags_1[0]), /* 1 */
	asn_DEF_S1AP_SynchronisationInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1AP_SynchronisationInformation_tags_1)
		/sizeof(asn_DEF_S1AP_SynchronisationInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1AP_SynchronisationInformation_1,
	4,	/* Elements count */
	&asn_SPC_S1AP_SynchronisationInformation_specs_1	/* Additional specs */
};
