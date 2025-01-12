/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "/home/user/openairinterface5g/openair2/RRC/LTE/MESSAGES/asn1c/ASN1_files/lte-rrc-14.7.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -D /home/user/openairinterface5g/cmake_targets/basic_simulator/enb/CMakeFiles/RRC_Rel14`
 */

#ifndef	_SL_DiscSysInfoReport_r13_H_
#define	_SL_DiscSysInfoReport_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdentity.h"
#include "ARFCN-ValueEUTRA-r9.h"
#include "P-Max.h"
#include <NativeInteger.h>
#include "Q-RxLevMin.h"
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>
#include "T-Reselection.h"
#include "ARFCN-ValueEUTRA.h"
#include "AdditionalSpectrumEmission.h"
#include "AdditionalSpectrumEmission-v10l0.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13 {
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB0	= 0,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB1	= 1,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB2	= 2,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB3	= 3,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB4	= 4,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB5	= 5,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB6	= 6,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB8	= 7,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB10	= 8,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB12	= 9,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB14	= 10,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB16	= 11,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB18	= 12,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB20	= 13,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB22	= 14,
	SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13_dB24	= 15
} e_SL_DiscSysInfoReport_r13__cellReselectionInfo_r13__q_Hyst_r13;
typedef enum SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13 {
	SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n6	= 0,
	SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n15	= 1,
	SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n25	= 2,
	SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n50	= 3,
	SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n75	= 4,
	SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13_n100	= 5
} e_SL_DiscSysInfoReport_r13__freqInfo_r13__ul_Bandwidth_r13;

/* Forward declarations */
struct PLMN_IdentityList;
struct SL_DiscRxPoolList_r12;
struct SL_DiscTxPoolList_r12;
struct SL_DiscTxPowerInfoList_r12;
struct SL_SyncConfigNFreq_r13;
struct TDD_Config;

/* SL-DiscSysInfoReport-r13 */
typedef struct SL_DiscSysInfoReport_r13 {
	struct PLMN_IdentityList	*plmn_IdentityList_r13;	/* OPTIONAL */
	CellIdentity_t	*cellIdentity_13;	/* OPTIONAL */
	ARFCN_ValueEUTRA_r9_t	*carrierFreqInfo_13;	/* OPTIONAL */
	struct SL_DiscRxPoolList_r12	*discRxResources_r13;	/* OPTIONAL */
	struct SL_DiscTxPoolList_r12	*discTxPoolCommon_r13;	/* OPTIONAL */
	struct SL_DiscTxPowerInfoList_r12	*discTxPowerInfo_r13;	/* OPTIONAL */
	struct SL_SyncConfigNFreq_r13	*discSyncConfig_r13;	/* OPTIONAL */
	struct SL_DiscSysInfoReport_r13__discCellSelectionInfo_r13 {
		Q_RxLevMin_t	 q_RxLevMin_r13;
		long	*q_RxLevMinOffset_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *discCellSelectionInfo_r13;
	struct SL_DiscSysInfoReport_r13__cellReselectionInfo_r13 {
		long	 q_Hyst_r13;
		Q_RxLevMin_t	 q_RxLevMin_r13;
		T_Reselection_t	 t_ReselectionEUTRA_r13;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *cellReselectionInfo_r13;
	struct TDD_Config	*tdd_Config_r13;	/* OPTIONAL */
	struct SL_DiscSysInfoReport_r13__freqInfo_r13 {
		ARFCN_ValueEUTRA_t	*ul_CarrierFreq_r13;	/* OPTIONAL */
		long	*ul_Bandwidth_r13;	/* OPTIONAL */
		AdditionalSpectrumEmission_t	*additionalSpectrumEmission_r13;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *freqInfo_r13;
	P_Max_t	*p_Max_r13;	/* OPTIONAL */
	long	*referenceSignalPower_r13;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct SL_DiscSysInfoReport_r13__ext1 {
		struct SL_DiscSysInfoReport_r13__ext1__freqInfo_v1370 {
			AdditionalSpectrumEmission_v10l0_t	 additionalSpectrumEmission_v1370;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *freqInfo_v1370;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_DiscSysInfoReport_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_q_Hyst_r13_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_r13_35;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_DiscSysInfoReport_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_DiscSysInfoReport_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_DiscSysInfoReport_r13_1[14];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-IdentityList.h"
#include "SL-DiscRxPoolList-r12.h"
#include "SL-DiscTxPoolList-r12.h"
#include "SL-DiscTxPowerInfoList-r12.h"
#include "SL-SyncConfigNFreq-r13.h"
#include "TDD-Config.h"

#endif	/* _SL_DiscSysInfoReport_r13_H_ */
#include <asn_internal.h>
