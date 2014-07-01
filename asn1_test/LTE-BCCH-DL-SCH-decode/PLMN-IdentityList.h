/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_PLMN_IdentityList_H_
#define	_PLMN_IdentityList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PLMN_IdentityInfo;

/* PLMN-IdentityList */
typedef struct PLMN_IdentityList {
	A_SEQUENCE_OF(struct PLMN_IdentityInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMN_IdentityList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMN_IdentityList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PLMN-IdentityInfo.h"

#endif	/* _PLMN_IdentityList_H_ */
#include <asn_internal.h>
