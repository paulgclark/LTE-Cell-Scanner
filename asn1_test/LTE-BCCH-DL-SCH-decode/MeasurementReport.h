/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_MeasurementReport_H_
#define	_MeasurementReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementReport-r8-IEs.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementReport__criticalExtensions_PR {
	MeasurementReport__criticalExtensions_PR_NOTHING,	/* No components present */
	MeasurementReport__criticalExtensions_PR_c1,
	MeasurementReport__criticalExtensions_PR_criticalExtensionsFuture
} MeasurementReport__criticalExtensions_PR;
typedef enum MeasurementReport__criticalExtensions__c1_PR {
	MeasurementReport__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	MeasurementReport__criticalExtensions__c1_PR_measurementReport_r8,
	MeasurementReport__criticalExtensions__c1_PR_spare7,
	MeasurementReport__criticalExtensions__c1_PR_spare6,
	MeasurementReport__criticalExtensions__c1_PR_spare5,
	MeasurementReport__criticalExtensions__c1_PR_spare4,
	MeasurementReport__criticalExtensions__c1_PR_spare3,
	MeasurementReport__criticalExtensions__c1_PR_spare2,
	MeasurementReport__criticalExtensions__c1_PR_spare1
} MeasurementReport__criticalExtensions__c1_PR;

/* MeasurementReport */
typedef struct MeasurementReport {
	struct MeasurementReport__criticalExtensions {
		MeasurementReport__criticalExtensions_PR present;
		union MeasurementReport__criticalExtensions_u {
			struct MeasurementReport__criticalExtensions__c1 {
				MeasurementReport__criticalExtensions__c1_PR present;
				union MeasurementReport__criticalExtensions__c1_u {
					MeasurementReport_r8_IEs_t	 measurementReport_r8;
					NULL_t	 spare7;
					NULL_t	 spare6;
					NULL_t	 spare5;
					NULL_t	 spare4;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} c1;
			struct MeasurementReport__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementReport;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementReport_H_ */
#include <asn_internal.h>
