/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_DLInformationTransfer_NB_H_
#define	_DLInformationTransfer_NB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "DLInformationTransfer-NB-r13-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DLInformationTransfer_NB__criticalExtensions_PR {
	DLInformationTransfer_NB__criticalExtensions_PR_NOTHING,	/* No components present */
	DLInformationTransfer_NB__criticalExtensions_PR_c1,
	DLInformationTransfer_NB__criticalExtensions_PR_criticalExtensionsFuture
} DLInformationTransfer_NB__criticalExtensions_PR;
typedef enum DLInformationTransfer_NB__criticalExtensions__c1_PR {
	DLInformationTransfer_NB__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	DLInformationTransfer_NB__criticalExtensions__c1_PR_dlInformationTransfer_r13,
	DLInformationTransfer_NB__criticalExtensions__c1_PR_spare1
} DLInformationTransfer_NB__criticalExtensions__c1_PR;

/* DLInformationTransfer-NB */
typedef struct DLInformationTransfer_NB {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct DLInformationTransfer_NB__criticalExtensions {
		DLInformationTransfer_NB__criticalExtensions_PR present;
		union DLInformationTransfer_NB__criticalExtensions_u {
			struct DLInformationTransfer_NB__criticalExtensions__c1 {
				DLInformationTransfer_NB__criticalExtensions__c1_PR present;
				union DLInformationTransfer_NB__criticalExtensions__c1_u {
					DLInformationTransfer_NB_r13_IEs_t	 dlInformationTransfer_r13;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct DLInformationTransfer_NB__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DLInformationTransfer_NB_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DLInformationTransfer_NB;
extern asn_SEQUENCE_specifics_t asn_SPC_DLInformationTransfer_NB_specs_1;
extern asn_TYPE_member_t asn_MBR_DLInformationTransfer_NB_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _DLInformationTransfer_NB_H_ */
#include <asn_internal.h>