/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/user/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R14/x2ap-14.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/X2AP_R14`
 */

#ifndef	_X2AP_TraceDepth_H_
#define	_X2AP_TraceDepth_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2AP_TraceDepth {
	X2AP_TraceDepth_minimum	= 0,
	X2AP_TraceDepth_medium	= 1,
	X2AP_TraceDepth_maximum	= 2,
	X2AP_TraceDepth_minimumWithoutVendorSpecificExtension	= 3,
	X2AP_TraceDepth_mediumWithoutVendorSpecificExtension	= 4,
	X2AP_TraceDepth_maximumWithoutVendorSpecificExtension	= 5
	/*
	 * Enumeration is extensible
	 */
} e_X2AP_TraceDepth;

/* X2AP_TraceDepth */
typedef long	 X2AP_TraceDepth_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2AP_TraceDepth_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2AP_TraceDepth;
extern const asn_INTEGER_specifics_t asn_SPC_TraceDepth_specs_1;
asn_struct_free_f TraceDepth_free;
asn_struct_print_f TraceDepth_print;
asn_constr_check_f TraceDepth_constraint;
ber_type_decoder_f TraceDepth_decode_ber;
der_type_encoder_f TraceDepth_encode_der;
xer_type_decoder_f TraceDepth_decode_xer;
xer_type_encoder_f TraceDepth_encode_xer;
per_type_decoder_f TraceDepth_decode_uper;
per_type_encoder_f TraceDepth_encode_uper;
per_type_decoder_f TraceDepth_decode_aper;
per_type_encoder_f TraceDepth_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2AP_TraceDepth_H_ */
#include <asn_internal.h>
