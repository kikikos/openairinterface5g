/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/X2AP_R14`
 */

#include "X2AP_CauseRadioNetwork.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_X2AP_CauseRadioNetwork_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  21 }	/* (0..21,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2AP_CauseRadioNetwork_value2enum_1[] = {
	{ 0,	36,	"handover-desirable-for-radio-reasons" },
	{ 1,	22,	"time-critical-handover" },
	{ 2,	30,	"resource-optimisation-handover" },
	{ 3,	27,	"reduce-load-in-serving-cell" },
	{ 4,	16,	"partial-handover" },
	{ 5,	26,	"unknown-new-eNB-UE-X2AP-ID" },
	{ 6,	26,	"unknown-old-eNB-UE-X2AP-ID" },
	{ 7,	26,	"unknown-pair-of-UE-X2AP-ID" },
	{ 8,	21,	"ho-target-not-allowed" },
	{ 9,	22,	"tx2relocoverall-expiry" },
	{ 10,	17,	"trelocprep-expiry" },
	{ 11,	18,	"cell-not-available" },
	{ 12,	43,	"no-radio-resources-available-in-target-cell" },
	{ 13,	19,	"invalid-MME-GroupID" },
	{ 14,	16,	"unknown-MME-Code" },
	{ 15,	63,	"encryption-and-or-integrity-protection-algorithms-not-supported" },
	{ 16,	26,	"reportCharacteristicsEmpty" },
	{ 17,	19,	"noReportPeriodicity" },
	{ 18,	21,	"existingMeasurementID" },
	{ 19,	26,	"unknown-eNB-Measurement-ID" },
	{ 20,	37,	"measurement-temporarily-not-available" },
	{ 21,	11,	"unspecified" },
	{ 22,	14,	"load-balancing" },
	{ 23,	21,	"handover-optimisation" },
	{ 24,	26,	"value-out-of-allowed-range" },
	{ 25,	27,	"multiple-E-RAB-ID-instances" },
	{ 26,	18,	"switch-off-ongoing" },
	{ 27,	23,	"not-supported-QCI-value" },
	{ 28,	40,	"measurement-not-supported-for-the-object" },
	{ 29,	17,	"tDCoverall-expiry" },
	{ 30,	14,	"tDCprep-expiry" },
	{ 31,	34,	"action-desirable-for-radio-reasons" },
	{ 32,	11,	"reduce-load" },
	{ 33,	21,	"resource-optimisation" },
	{ 34,	20,	"time-critical-action" },
	{ 35,	18,	"target-not-allowed" },
	{ 36,	28,	"no-radio-resources-available" },
	{ 37,	23,	"invalid-QoS-combination" },
	{ 38,	35,	"encryption-algorithms-not-aupported" },
	{ 39,	19,	"procedure-cancelled" },
	{ 40,	11,	"rRM-purpose" },
	{ 41,	21,	"improve-user-bit-rate" },
	{ 42,	15,	"user-inactivity" },
	{ 43,	29,	"radio-connection-with-UE-lost" },
	{ 44,	40,	"failure-in-the-radio-interface-procedure" },
	{ 45,	27,	"bearer-option-not-supported" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2AP_CauseRadioNetwork_enum2value_1[] = {
	31,	/* action-desirable-for-radio-reasons(31) */
	45,	/* bearer-option-not-supported(45) */
	11,	/* cell-not-available(11) */
	38,	/* encryption-algorithms-not-aupported(38) */
	15,	/* encryption-and-or-integrity-protection-algorithms-not-supported(15) */
	18,	/* existingMeasurementID(18) */
	44,	/* failure-in-the-radio-interface-procedure(44) */
	0,	/* handover-desirable-for-radio-reasons(0) */
	23,	/* handover-optimisation(23) */
	8,	/* ho-target-not-allowed(8) */
	41,	/* improve-user-bit-rate(41) */
	13,	/* invalid-MME-GroupID(13) */
	37,	/* invalid-QoS-combination(37) */
	22,	/* load-balancing(22) */
	28,	/* measurement-not-supported-for-the-object(28) */
	20,	/* measurement-temporarily-not-available(20) */
	25,	/* multiple-E-RAB-ID-instances(25) */
	36,	/* no-radio-resources-available(36) */
	12,	/* no-radio-resources-available-in-target-cell(12) */
	17,	/* noReportPeriodicity(17) */
	27,	/* not-supported-QCI-value(27) */
	4,	/* partial-handover(4) */
	39,	/* procedure-cancelled(39) */
	40,	/* rRM-purpose(40) */
	43,	/* radio-connection-with-UE-lost(43) */
	32,	/* reduce-load(32) */
	3,	/* reduce-load-in-serving-cell(3) */
	16,	/* reportCharacteristicsEmpty(16) */
	33,	/* resource-optimisation(33) */
	2,	/* resource-optimisation-handover(2) */
	26,	/* switch-off-ongoing(26) */
	29,	/* tDCoverall-expiry(29) */
	30,	/* tDCprep-expiry(30) */
	35,	/* target-not-allowed(35) */
	34,	/* time-critical-action(34) */
	1,	/* time-critical-handover(1) */
	10,	/* trelocprep-expiry(10) */
	9,	/* tx2relocoverall-expiry(9) */
	14,	/* unknown-MME-Code(14) */
	19,	/* unknown-eNB-Measurement-ID(19) */
	5,	/* unknown-new-eNB-UE-X2AP-ID(5) */
	6,	/* unknown-old-eNB-UE-X2AP-ID(6) */
	7,	/* unknown-pair-of-UE-X2AP-ID(7) */
	21,	/* unspecified(21) */
	42,	/* user-inactivity(42) */
	24	/* value-out-of-allowed-range(24) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_X2AP_CauseRadioNetwork_specs_1 = {
	asn_MAP_X2AP_CauseRadioNetwork_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2AP_CauseRadioNetwork_enum2value_1,	/* N => "tag"; sorted by N */
	46,	/* Number of elements in the maps */
	23,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2AP_CauseRadioNetwork_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2AP_CauseRadioNetwork = {
	"CauseRadioNetwork",
	"CauseRadioNetwork",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2AP_CauseRadioNetwork_tags_1,
	sizeof(asn_DEF_X2AP_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_X2AP_CauseRadioNetwork_tags_1[0]), /* 1 */
	asn_DEF_X2AP_CauseRadioNetwork_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2AP_CauseRadioNetwork_tags_1)
		/sizeof(asn_DEF_X2AP_CauseRadioNetwork_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2AP_CauseRadioNetwork_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2AP_CauseRadioNetwork_specs_1	/* Additional specs */
};

