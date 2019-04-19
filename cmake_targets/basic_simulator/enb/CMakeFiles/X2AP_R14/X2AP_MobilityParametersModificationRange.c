/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#include "X2AP_MobilityParametersModificationRange.h"

static int
memb_X2AP_handoverTriggerChangeLowerLimit_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -20 && value <= 20)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_X2AP_handoverTriggerChangeUpperLimit_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -20 && value <= 20)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_X2AP_handoverTriggerChangeLowerLimit_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -20,  20 }	/* (-20..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_X2AP_handoverTriggerChangeUpperLimit_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6, -20,  20 }	/* (-20..20) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_X2AP_MobilityParametersModificationRange_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_MobilityParametersModificationRange, handoverTriggerChangeLowerLimit),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_handoverTriggerChangeLowerLimit_constr_2,  memb_X2AP_handoverTriggerChangeLowerLimit_constraint_1 },
		0, 0, /* No default value */
		"handoverTriggerChangeLowerLimit"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct X2AP_MobilityParametersModificationRange, handoverTriggerChangeUpperLimit),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_X2AP_handoverTriggerChangeUpperLimit_constr_3,  memb_X2AP_handoverTriggerChangeUpperLimit_constraint_1 },
		0, 0, /* No default value */
		"handoverTriggerChangeUpperLimit"
		},
};
static const ber_tlv_tag_t asn_DEF_X2AP_MobilityParametersModificationRange_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_X2AP_MobilityParametersModificationRange_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* handoverTriggerChangeLowerLimit */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* handoverTriggerChangeUpperLimit */
};
static asn_SEQUENCE_specifics_t asn_SPC_X2AP_MobilityParametersModificationRange_specs_1 = {
	sizeof(struct X2AP_MobilityParametersModificationRange),
	offsetof(struct X2AP_MobilityParametersModificationRange, _asn_ctx),
	asn_MAP_X2AP_MobilityParametersModificationRange_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_X2AP_MobilityParametersModificationRange = {
	"MobilityParametersModificationRange",
	"MobilityParametersModificationRange",
	&asn_OP_SEQUENCE,
	asn_DEF_X2AP_MobilityParametersModificationRange_tags_1,
	sizeof(asn_DEF_X2AP_MobilityParametersModificationRange_tags_1)
		/sizeof(asn_DEF_X2AP_MobilityParametersModificationRange_tags_1[0]), /* 1 */
	asn_DEF_X2AP_MobilityParametersModificationRange_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_MobilityParametersModificationRange_tags_1)
		/sizeof(asn_DEF_X2AP_MobilityParametersModificationRange_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_X2AP_MobilityParametersModificationRange_1,
	2,	/* Elements count */
	&asn_SPC_X2AP_MobilityParametersModificationRange_specs_1	/* Additional specs */
};
