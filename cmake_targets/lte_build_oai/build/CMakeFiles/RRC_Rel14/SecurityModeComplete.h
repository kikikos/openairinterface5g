/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SecurityModeComplete_H_
#define	_SecurityModeComplete_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "SecurityModeComplete-r8-IEs.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityModeComplete__criticalExtensions_PR {
	SecurityModeComplete__criticalExtensions_PR_NOTHING,	/* No components present */
	SecurityModeComplete__criticalExtensions_PR_securityModeComplete_r8,
	SecurityModeComplete__criticalExtensions_PR_criticalExtensionsFuture
} SecurityModeComplete__criticalExtensions_PR;

/* SecurityModeComplete */
typedef struct SecurityModeComplete {
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct SecurityModeComplete__criticalExtensions {
		SecurityModeComplete__criticalExtensions_PR present;
		union SecurityModeComplete__criticalExtensions_u {
			SecurityModeComplete_r8_IEs_t	 securityModeComplete_r8;
			struct SecurityModeComplete__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityModeComplete_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityModeComplete;
extern asn_SEQUENCE_specifics_t asn_SPC_SecurityModeComplete_specs_1;
extern asn_TYPE_member_t asn_MBR_SecurityModeComplete_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SecurityModeComplete_H_ */
#include <asn_internal.h>
