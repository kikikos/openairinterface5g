/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_PCCH_Message_NB_H_
#define	_PCCH_Message_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PCCH-MessageType-NB.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PCCH-Message-NB */
typedef struct PCCH_Message_NB {
	PCCH_MessageType_NB_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_Message_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_Message_NB;

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_Message_NB_H_ */
#include <asn_internal.h>