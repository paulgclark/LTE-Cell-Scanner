/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-850.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "Q-OffsetRange.h"

int
Q_OffsetRange_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
Q_OffsetRange_1_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

void
Q_OffsetRange_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	Q_OffsetRange_1_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

int
Q_OffsetRange_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	Q_OffsetRange_1_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

asn_dec_rval_t
Q_OffsetRange_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	Q_OffsetRange_1_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

asn_enc_rval_t
Q_OffsetRange_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	Q_OffsetRange_1_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

asn_dec_rval_t
Q_OffsetRange_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	Q_OffsetRange_1_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

asn_enc_rval_t
Q_OffsetRange_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	Q_OffsetRange_1_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

asn_dec_rval_t
Q_OffsetRange_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	Q_OffsetRange_1_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

asn_enc_rval_t
Q_OffsetRange_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	Q_OffsetRange_1_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_Q_OffsetRange_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  30 }	/* (0..30) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_INTEGER_enum_map_t asn_MAP_Q_OffsetRange_value2enum_1[] = {
	{ 0,	5,	"dB-24" },
	{ 1,	5,	"dB-22" },
	{ 2,	5,	"dB-20" },
	{ 3,	5,	"dB-18" },
	{ 4,	5,	"dB-16" },
	{ 5,	5,	"dB-14" },
	{ 6,	5,	"dB-12" },
	{ 7,	5,	"dB-10" },
	{ 8,	4,	"dB-8" },
	{ 9,	4,	"dB-6" },
	{ 10,	4,	"dB-5" },
	{ 11,	4,	"dB-4" },
	{ 12,	4,	"dB-3" },
	{ 13,	4,	"dB-2" },
	{ 14,	4,	"dB-1" },
	{ 15,	3,	"dB0" },
	{ 16,	3,	"dB1" },
	{ 17,	3,	"dB2" },
	{ 18,	3,	"dB3" },
	{ 19,	3,	"dB4" },
	{ 20,	3,	"dB5" },
	{ 21,	3,	"dB6" },
	{ 22,	3,	"dB8" },
	{ 23,	4,	"dB10" },
	{ 24,	4,	"dB12" },
	{ 25,	4,	"dB14" },
	{ 26,	4,	"dB16" },
	{ 27,	4,	"dB18" },
	{ 28,	4,	"dB20" },
	{ 29,	4,	"dB22" },
	{ 30,	4,	"dB24" }
};
static unsigned int asn_MAP_Q_OffsetRange_enum2value_1[] = {
	14,	/* dB-1(14) */
	7,	/* dB-10(7) */
	6,	/* dB-12(6) */
	5,	/* dB-14(5) */
	4,	/* dB-16(4) */
	3,	/* dB-18(3) */
	13,	/* dB-2(13) */
	2,	/* dB-20(2) */
	1,	/* dB-22(1) */
	0,	/* dB-24(0) */
	12,	/* dB-3(12) */
	11,	/* dB-4(11) */
	10,	/* dB-5(10) */
	9,	/* dB-6(9) */
	8,	/* dB-8(8) */
	15,	/* dB0(15) */
	16,	/* dB1(16) */
	23,	/* dB10(23) */
	24,	/* dB12(24) */
	25,	/* dB14(25) */
	26,	/* dB16(26) */
	27,	/* dB18(27) */
	17,	/* dB2(17) */
	28,	/* dB20(28) */
	29,	/* dB22(29) */
	30,	/* dB24(30) */
	18,	/* dB3(18) */
	19,	/* dB4(19) */
	20,	/* dB5(20) */
	21,	/* dB6(21) */
	22	/* dB8(22) */
};
static asn_INTEGER_specifics_t asn_SPC_Q_OffsetRange_specs_1 = {
	asn_MAP_Q_OffsetRange_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_Q_OffsetRange_enum2value_1,	/* N => "tag"; sorted by N */
	31,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static ber_tlv_tag_t asn_DEF_Q_OffsetRange_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Q_OffsetRange = {
	"Q-OffsetRange",
	"Q-OffsetRange",
	Q_OffsetRange_free,
	Q_OffsetRange_print,
	Q_OffsetRange_constraint,
	Q_OffsetRange_decode_ber,
	Q_OffsetRange_encode_der,
	Q_OffsetRange_decode_xer,
	Q_OffsetRange_encode_xer,
	Q_OffsetRange_decode_uper,
	Q_OffsetRange_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Q_OffsetRange_tags_1,
	sizeof(asn_DEF_Q_OffsetRange_tags_1)
		/sizeof(asn_DEF_Q_OffsetRange_tags_1[0]), /* 1 */
	asn_DEF_Q_OffsetRange_tags_1,	/* Same as above */
	sizeof(asn_DEF_Q_OffsetRange_tags_1)
		/sizeof(asn_DEF_Q_OffsetRange_tags_1[0]), /* 1 */
	&asn_PER_type_Q_OffsetRange_constr_1,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Q_OffsetRange_specs_1	/* Additional specs */
};

