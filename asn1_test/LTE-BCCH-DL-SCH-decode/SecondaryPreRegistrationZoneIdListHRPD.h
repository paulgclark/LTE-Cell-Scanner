/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_SecondaryPreRegistrationZoneIdListHRPD_H_
#define	_SecondaryPreRegistrationZoneIdListHRPD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PreRegistrationZoneIdHRPD.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SecondaryPreRegistrationZoneIdListHRPD */
typedef struct SecondaryPreRegistrationZoneIdListHRPD {
	A_SEQUENCE_OF(PreRegistrationZoneIdHRPD_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecondaryPreRegistrationZoneIdListHRPD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecondaryPreRegistrationZoneIdListHRPD;

#ifdef __cplusplus
}
#endif

#endif	/* _SecondaryPreRegistrationZoneIdListHRPD_H_ */
#include <asn_internal.h>
