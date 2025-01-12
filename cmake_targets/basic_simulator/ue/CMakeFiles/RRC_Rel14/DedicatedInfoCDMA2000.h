/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_DedicatedInfoCDMA2000_H_
#define	_DedicatedInfoCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DedicatedInfoCDMA2000 */
typedef OCTET_STRING_t	 DedicatedInfoCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DedicatedInfoCDMA2000;
asn_struct_free_f DedicatedInfoCDMA2000_free;
asn_struct_print_f DedicatedInfoCDMA2000_print;
asn_constr_check_f DedicatedInfoCDMA2000_constraint;
ber_type_decoder_f DedicatedInfoCDMA2000_decode_ber;
der_type_encoder_f DedicatedInfoCDMA2000_encode_der;
xer_type_decoder_f DedicatedInfoCDMA2000_decode_xer;
xer_type_encoder_f DedicatedInfoCDMA2000_encode_xer;
per_type_decoder_f DedicatedInfoCDMA2000_decode_uper;
per_type_encoder_f DedicatedInfoCDMA2000_encode_uper;
per_type_decoder_f DedicatedInfoCDMA2000_decode_aper;
per_type_encoder_f DedicatedInfoCDMA2000_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _DedicatedInfoCDMA2000_H_ */
#include <asn_internal.h>
