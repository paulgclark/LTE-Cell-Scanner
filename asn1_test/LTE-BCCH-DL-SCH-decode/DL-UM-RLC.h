/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_DL_UM_RLC_H_
#define	_DL_UM_RLC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SN-FieldLength.h"
#include "T-Reordering.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DL-UM-RLC */
typedef struct DL_UM_RLC {
	SN_FieldLength_t	 sn_FieldLength;
	T_Reordering_t	 t_Reordering;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_UM_RLC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_UM_RLC;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_UM_RLC_H_ */
#include <asn_internal.h>
