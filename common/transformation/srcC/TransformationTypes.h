/******************************************************************************/
/* (c) 2020 Copyright, Real-Time Innovations, Inc. (RTI) All rights reserved. */
/*                                                                            */
/* RTI grants Licensee a license to use, modify, compile, and create          */
/* derivative works of the software solely for use with RTI Connext DDS.      */
/* Licensee may redistribute copies of the software provided that all such    */
/* copies are subject to this license.                                        */
/* The software is provided "as is", with no warranty of any type, including  */
/* any warranty for fitness for any purpose. RTI is under no obligation to    */
/* maintain or support the software.  RTI shall not be liable for any         */
/* incidental or consequential damages arising out of the use or inability to */
/* use the software.                                                          */
/*                                                                            */
/******************************************************************************/

#ifndef Transformation_Types_h
#define Transformation_Types_h

#ifndef ndds_c_h
    #include "ndds/ndds_c.h"
#endif

typedef enum RTI_TSFM_TransformationKind {
    RTI_TSFM_TransformationKind_SERIALIZER,
    RTI_TSFM_TransformationKind_DESERIALIZER
} RTI_TSFM_TransformationKind;

typedef struct RTI_TSFM_TransformationPluginConfig {
    DDS_Char *dll;
    DDS_Char *create_fn;

} RTI_TSFM_TransformationPluginConfig;

typedef struct RTI_TSFM_TransformationConfig {
    RTI_TSFM_TransformationKind type;
    DDS_Char *input_type;
    DDS_Char *output_type;

} RTI_TSFM_TransformationConfig;

#endif /* Transformation_Types_h */