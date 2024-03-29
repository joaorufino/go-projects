/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "CAM-PDU-Descriptions"
 * 	found in "ITS CAM v1.3.2.asn"
 */

#ifndef	_BasicVehicleContainerHighFrequency_H_
#define	_BasicVehicleContainerHighFrequency_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Heading.h"
#include "Speed.h"
#include "DriveDirection.h"
#include "VehicleLength.h"
#include "VehicleWidth.h"
#include "LongitudinalAcceleration.h"
#include "Curvature.h"
#include "CurvatureCalculationMode.h"
#include "YawRate.h"
#include "AccelerationControl.h"
#include "LanePosition.h"
#include "PerformanceClass.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SteeringWheelAngle;
struct LateralAcceleration;
struct VerticalAcceleration;
struct CenDsrcTollingZone;

/* BasicVehicleContainerHighFrequency */
typedef struct BasicVehicleContainerHighFrequency {
	Heading_t	 heading;
	Speed_t	 speed;
	DriveDirection_t	 driveDirection;
	VehicleLength_t	 vehicleLength;
	VehicleWidth_t	 vehicleWidth;
	LongitudinalAcceleration_t	 longitudinalAcceleration;
	Curvature_t	 curvature;
	CurvatureCalculationMode_t	 curvatureCalculationMode;
	YawRate_t	 yawRate;
	AccelerationControl_t	*accelerationControl	/* OPTIONAL */;
	LanePosition_t	*lanePosition	/* OPTIONAL */;
	struct SteeringWheelAngle	*steeringWheelAngle	/* OPTIONAL */;
	struct LateralAcceleration	*lateralAcceleration	/* OPTIONAL */;
	struct VerticalAcceleration	*verticalAcceleration	/* OPTIONAL */;
	PerformanceClass_t	*performanceClass	/* OPTIONAL */;
	struct CenDsrcTollingZone	*cenDsrcTollingZone	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} BasicVehicleContainerHighFrequency_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_BasicVehicleContainerHighFrequency;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SteeringWheelAngle.h"
#include "LateralAcceleration.h"
#include "VerticalAcceleration.h"
#include "CenDsrcTollingZone.h"

#endif	/* _BasicVehicleContainerHighFrequency_H_ */
#include <asn_internal.h>
