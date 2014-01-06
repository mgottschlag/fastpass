/*
 * tcp_receiver.h
 *
 *  Created on: September 24, 2013
 *      Author: aousterh
 */

#include "log.h"

#include <stdint.h>

#ifndef TCP_RECEIVER_H_
#define TCP_RECEIVER_H_

struct tcp_receiver {
  uint64_t start_time;
  uint64_t duration;  // How long to send for
  uint16_t port_num;
  struct log log;
};

// Inits a tcp receiver.
void tcp_receiver_init(struct tcp_receiver *receiver, uint64_t start_time,
		       uint64_t duration, uint16_t port_num);

// Runs one TCP receiver.
void *run_tcp_receiver(void *);

#endif /* TCP_RECEIVER_H_ */
