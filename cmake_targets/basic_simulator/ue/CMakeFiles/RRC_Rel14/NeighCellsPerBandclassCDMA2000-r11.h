/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/ue/CMakeFiles/RRC_Rel14`
 */

#ifndef	_NeighCellsPerBandclassCDMA2000_r11_H_
#define	_NeighCellsPerBandclassCDMA2000_r11_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueCDMA2000.h"
#include "PhysCellIdCDMA2000.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NeighCellsPerBandclassCDMA2000-r11 */
typedef struct NeighCellsPerBandclassCDMA2000_r11 {
	ARFCN_ValueCDMA2000_t	 arfcn;
	struct NeighCellsPerBandclassCDMA2000_r11__physCellIdList_r11 {
		A_SEQUENCE_OF(PhysCellIdCDMA2000_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} physCellIdList_r11;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellsPerBandclassCDMA2000_r11_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellsPerBandclassCDMA2000_r11;
extern asn_SEQUENCE_specifics_t asn_SPC_NeighCellsPerBandclassCDMA2000_r11_specs_1;
extern asn_TYPE_member_t asn_MBR_NeighCellsPerBandclassCDMA2000_r11_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellsPerBandclassCDMA2000_r11_H_ */
#include <asn_internal.h>
