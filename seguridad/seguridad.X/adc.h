/* 
 * File:   adc.h
 * Author: Logicos
 *
 * Created on 26 de enero de 2023, 09:49 AM
 */

#ifndef ADC_H
#define	ADC_H

#ifdef	__cplusplus
extern "C" {
#endif

void ADC_Init(void);
int ADC_Read(int channel);


#ifdef	__cplusplus
}
#endif

#endif	/* ADC_H */

