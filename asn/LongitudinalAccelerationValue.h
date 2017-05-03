/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ITS CAM v1.3.2.asn"
 */

#ifndef	_LongitudinalAccelerationValue_H_
#define	_LongitudinalAccelerationValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LongitudinalAccelerationValue {
	LongitudinalAccelerationValue_pointOneMeterPerSecSquaredForward	= 1,
	LongitudinalAccelerationValue_pointOneMeterPerSecSquaredBackward	= -1,
	LongitudinalAccelerationValue_unavailable	= 161
} e_LongitudinalAccelerationValue;

/* LongitudinalAccelerationValue */
typedef long	 LongitudinalAccelerationValue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LongitudinalAccelerationValue;
asn_struct_free_f LongitudinalAccelerationValue_free;
asn_struct_print_f LongitudinalAccelerationValue_print;
asn_constr_check_f LongitudinalAccelerationValue_constraint;
ber_type_decoder_f LongitudinalAccelerationValue_decode_ber;
der_type_encoder_f LongitudinalAccelerationValue_encode_der;
xer_type_decoder_f LongitudinalAccelerationValue_decode_xer;
xer_type_encoder_f LongitudinalAccelerationValue_encode_xer;
per_type_decoder_f LongitudinalAccelerationValue_decode_uper;
per_type_encoder_f LongitudinalAccelerationValue_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _LongitudinalAccelerationValue_H_ */
#include <asn_internal.h>
