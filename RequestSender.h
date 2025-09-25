#ifndef TOYSENDER_REQUESTSENDER_H
#define	TOYSENDER_REQUESTSENDER_H

#include <string>
#include <vector>
#include "operation_state.h"

namespace enterprise {
	namespace toysender {

		template <typename RequestType, template ResponseType>
		class RequestSender {
			RequestType d_request;
			ResponseReceiver< ResponseType> d_recr;
		public:
			using result_t = ResponseType;
			inline RequestSender(RequestType request, ResponseReceiver<ResponseType> recr) :d_request(request), d_recr(recr) {}
			virtual ~RequestSender();

			inline template<typename ReceiverType>
			operation_state connect(ReceiverType rec) {
				return operation_state(rec);
			}
		};
	} // namespace toysender
} // namespace enterprise
#endif

