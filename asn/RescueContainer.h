/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "ITS CAM v1.3.2.asn"
 */

#ifndef	_RescueContainer_H_
#define	_RescueContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LightBarSirenInUse.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RescueContainer */
typedef struct RescueContainer {
	LightBarSirenInUse_t	 lightBarSirenInUse;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RescueContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RescueContainer;

#ifdef __cplusplus
}
#endif

#endif	/* _RescueContainer_H_ */
#include <asn_internal.h>
