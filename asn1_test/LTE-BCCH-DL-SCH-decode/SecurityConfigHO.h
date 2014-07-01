/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SecurityConfigHO_H_
#define	_SecurityConfigHO_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "NextHopChainingCount.h"
#include <constr_SEQUENCE.h>
#include "SecurityAlgorithmConfig.h"
#include <OCTET_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecurityConfigHO__handoverType_PR {
	SecurityConfigHO__handoverType_PR_NOTHING,	/* No components present */
	SecurityConfigHO__handoverType_PR_intraLTE,
	SecurityConfigHO__handoverType_PR_interRAT
} SecurityConfigHO__handoverType_PR;

/* Forward declarations */
struct SecurityAlgorithmConfig;

/* SecurityConfigHO */
typedef struct SecurityConfigHO {
	struct SecurityConfigHO__handoverType {
		SecurityConfigHO__handoverType_PR present;
		union SecurityConfigHO__handoverType_u {
			struct SecurityConfigHO__handoverType__intraLTE {
				struct SecurityAlgorithmConfig	*securityAlgorithmConfig	/* OPTIONAL */;
				BOOLEAN_t	 keyChangeIndicator;
				NextHopChainingCount_t	 nextHopChainingCount;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} intraLTE;
			struct SecurityConfigHO__handoverType__interRAT {
				SecurityAlgorithmConfig_t	 securityAlgorithmConfig;
				OCTET_STRING_t	 nas_SecurityParamToEUTRA;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} interRAT;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} handoverType;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecurityConfigHO_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecurityConfigHO;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecurityAlgorithmConfig.h"

#endif	/* _SecurityConfigHO_H_ */
#include <asn_internal.h>
