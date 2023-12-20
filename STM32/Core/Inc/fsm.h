/*
 * fsm.h
 *
 *  Created on: Dec 20, 2023
 *      Author: chulo
 */

#ifndef INC_FSM_H_
#define INC_FSM_H_

extern void resetBuffer();
extern int timeout_flag;
extern uint8_t ERROR_CODE;

void uart_communiation_fsm();
void command_parser_fsm();

#endif /* INC_FSM_H_ */
