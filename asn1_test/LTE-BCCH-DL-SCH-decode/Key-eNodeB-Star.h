/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#ifndef	_Key_eNodeB_Star_H_
#define	_Key_eNodeB_Star_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Key-eNodeB-Star */
typedef BIT_STRING_t	 Key_eNodeB_Star_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Key_eNodeB_Star;
asn_struct_free_f Key_eNodeB_Star_free;
asn_struct_print_f Key_eNodeB_Star_print;
asn_constr_check_f Key_eNodeB_Star_constraint;
ber_type_decoder_f Key_eNodeB_Star_decode_ber;
der_type_encoder_f Key_eNodeB_Star_encode_der;
xer_type_decoder_f Key_eNodeB_Star_decode_xer;
xer_type_encoder_f Key_eNodeB_Star_encode_xer;
per_type_decoder_f Key_eNodeB_Star_decode_uper;
per_type_encoder_f Key_eNodeB_Star_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Key_eNodeB_Star_H_ */
#include <asn_internal.h>
