/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_ReleaseCause_H_
#define	_ReleaseCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReleaseCause {
	ReleaseCause_loadBalancingTAUrequired	= 0,
	ReleaseCause_other	= 1,
	ReleaseCause_cs_FallbackHighPriority_v1020	= 2,
	ReleaseCause_rrc_Suspend_v1320	= 3
} e_ReleaseCause;

/* ReleaseCause */
typedef long	 ReleaseCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ReleaseCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ReleaseCause;
extern const asn_INTEGER_specifics_t asn_SPC_ReleaseCause_specs_1;
asn_struct_free_f ReleaseCause_free;
asn_struct_print_f ReleaseCause_print;
asn_constr_check_f ReleaseCause_constraint;
ber_type_decoder_f ReleaseCause_decode_ber;
der_type_encoder_f ReleaseCause_encode_der;
xer_type_decoder_f ReleaseCause_decode_xer;
xer_type_encoder_f ReleaseCause_encode_xer;
per_type_decoder_f ReleaseCause_decode_uper;
per_type_encoder_f ReleaseCause_encode_uper;
per_type_decoder_f ReleaseCause_decode_aper;
per_type_encoder_f ReleaseCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReleaseCause_H_ */
#include <asn_internal.h>
