// License       : License.txt
// Specifications: Spec-00000058.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : CHS_MSS_00000058.cpp
// BSL              : 00000058
// Model number     : TDK CHS-MSS
// Spec               Component type       : ADC
//                    OS                   : Mbed
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 28/10/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "CHS_MSS.h"

AnalogIn CHS_MSS_adc( iCHS_MSS_pin , iVref );           // AnalogIn object

// Main Function
pp2ap_adc_t CHS_MSS_00000058( void )
{
        pp2ap_adc_t res = pp_00000058( CHS_MSS_adc , tbl_CHS_MSS );
        return( res );
}
