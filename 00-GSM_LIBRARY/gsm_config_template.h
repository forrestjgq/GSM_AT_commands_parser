/**
 * \author  Tilen Majerle
 * \email   tilen@majerle.eu
 * \website 
 * \license MIT
 * \brief   GSM config
 *	
\verbatim
   ----------------------------------------------------------------------
    Copyright (c) 2016 Tilen Majerle

    Permission is hereby granted, free of charge, to any person
    obtaining a copy of this software and associated documentation
    files (the "Software"), to deal in the Software without restriction,
    including without limitation the rights to use, copy, modify, merge,
    publish, distribute, sublicense, and/or sell copies of the Software, 
    and to permit persons to whom the Software is furnished to do so, 
    subject to the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
    OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
    AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
    HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
    WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
    OTHER DEALINGS IN THE SOFTWARE.
   ----------------------------------------------------------------------
\endverbatim
 */
#ifndef GSM_CONF_H
#define GSM_CONF_H 100

/* C++ detection */
#ifdef __cplusplus
extern "C" {
#endif

/**
 * \defgroup CONFIG
 * \brief    GSM Config
 * \{
 */
/**
 * \defgroup GSM_Config
 * \brief    GSM configuration
 * \{
 */

/**
 * \brief  GSM Receive buffer size in units of bytes for processing
 *
 */
#define GSM_BUFFER_SIZE                 512

/**
 * \brief  GSM RTOS support enabled (1) or disabled (0)
 *
 */
#define GSM_RTOS                        1
#define GSM_RTOS_SYNC_t                 osMutexDef_t
#define GSM_RTOS_TIMEOUT                180000

/**
 * \brief  Async data processing enabled (1) or disabled (0)
 */
#define GSM_UPDATE_ASYNC                1

/**
 * \brief  Maximal SMS length in units of bytes
 */
#define GSM_SMS_MAX_LENGTH              160

/**
 * \brief  Maximal number of stored informations about received SMS at a time
 */
#define GSM_MAX_RECEIVED_SMS_INFO       3

/**
 * \}
 */

/**
 * \}
 */

/* C++ detection */
#ifdef __cplusplus
}
#endif

#endif
