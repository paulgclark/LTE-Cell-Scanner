/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MeasResultsCDMA2000_H_
#define	_MeasResultsCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include "MeasResultListCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultsCDMA2000 */
typedef struct MeasResultsCDMA2000 {
	BOOLEAN_t	 preRegistrationStatusHRPD;
	MeasResultListCDMA2000_t	 measResultListCDMA2000;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultsCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultsCDMA2000;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultsCDMA2000_H_ */
#include <asn_internal.h>
