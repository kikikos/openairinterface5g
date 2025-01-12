/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-UE-Variables"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_VarMobilityHistoryReport_r12_H_
#define	_VarMobilityHistoryReport_r12_H_


#include <asn_application.h>

/* Including external dependencies */
#include "VisitedCellInfoList-r12.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VarMobilityHistoryReport-r12 */
typedef VisitedCellInfoList_r12_t	 VarMobilityHistoryReport_r12_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VarMobilityHistoryReport_r12;
asn_struct_free_f VarMobilityHistoryReport_r12_free;
asn_struct_print_f VarMobilityHistoryReport_r12_print;
asn_constr_check_f VarMobilityHistoryReport_r12_constraint;
ber_type_decoder_f VarMobilityHistoryReport_r12_decode_ber;
der_type_encoder_f VarMobilityHistoryReport_r12_encode_der;
xer_type_decoder_f VarMobilityHistoryReport_r12_decode_xer;
xer_type_encoder_f VarMobilityHistoryReport_r12_encode_xer;
per_type_decoder_f VarMobilityHistoryReport_r12_decode_uper;
per_type_encoder_f VarMobilityHistoryReport_r12_encode_uper;
per_type_decoder_f VarMobilityHistoryReport_r12_decode_aper;
per_type_encoder_f VarMobilityHistoryReport_r12_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VarMobilityHistoryReport_r12_H_ */
#include <asn_internal.h>
