/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_UL_AM_RLC_H_
#define	_UL_AM_RLC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "T-PollRetransmit.h"
#include "PollPDU.h"
#include "PollByte.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UL_AM_RLC__maxRetxThreshold {
	UL_AM_RLC__maxRetxThreshold_t1	= 0,
	UL_AM_RLC__maxRetxThreshold_t2	= 1,
	UL_AM_RLC__maxRetxThreshold_t3	= 2,
	UL_AM_RLC__maxRetxThreshold_t4	= 3,
	UL_AM_RLC__maxRetxThreshold_t6	= 4,
	UL_AM_RLC__maxRetxThreshold_t8	= 5,
	UL_AM_RLC__maxRetxThreshold_t16	= 6,
	UL_AM_RLC__maxRetxThreshold_t32	= 7
} e_UL_AM_RLC__maxRetxThreshold;

/* UL-AM-RLC */
typedef struct UL_AM_RLC {
	T_PollRetransmit_t	 t_PollRetransmit;
	PollPDU_t	 pollPDU;
	PollByte_t	 pollByte;
	long	 maxRetxThreshold;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_AM_RLC_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_maxRetxThreshold_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UL_AM_RLC;

#ifdef __cplusplus
}
#endif

#endif	/* _UL_AM_RLC_H_ */
#include <asn_internal.h>
