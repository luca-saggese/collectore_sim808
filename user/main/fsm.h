/*
 * fsm.h
 *
 *  Created on: 2016/7/26
 *      Author: lc
 */

#ifndef USER_MAIN_FSM_H_
#define USER_MAIN_FSM_H_


typedef enum
{
    STATE_INITIAL,
    STATE_WAIT_GPRS,
    STATE_WAIT_BEARER,
    STATE_WAIT_SOCKET,
    STATE_WAIT_IPADDR,
    STATE_WAIT_LOGIN,
    STATE_RUNNING,
    STATE_MAX
}STATE;

typedef enum
{
    EVT_LOOP,
    EVT_CALL_READY,
    EVT_GPRS_ATTACHED,
    EVT_BEARER_HOLD,
    EVT_HOSTNAME2IP,
    EVT_SOCKET_CONNECTED,
    EVT_SOCKET_CONNECT_FAILED,
    EVT_LOGINED,
    EVT_HEARTBEAT_LOSE,
    EVT_SOCKET_DISCONNECTED,
    EVT_BEARER_DEACTIVATED,
    EVT_HOSTNAME2IP_FAILED,
    EVT_MAX
}EVENT;

int fsm_run(EVENT);

#endif /* USER_MAIN_FSM_H_ */
