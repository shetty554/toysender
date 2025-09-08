#ifndef	RESPONSERECEIVER_H
#define RESPONSERECEIVER_H

namespace Enterprise
{
	namespce ToySender{


		template<typename ResponseType, typename ErrorResponseType>
		class ResponseReceiver
		{
			ResponseType d_resp;
			int d_rc;
			bool d_isFinal;
			ErrorResponseType d_errResp;
		public:
			ResponseReceiver() : d_rc(0), d_isFinal(false) {}
			inline void set_value(const ResponseType& resp, int rc, bool isFinal, const ErrorResponseType& errResp)
			{
				d_resp = resp;
				d_rc = rc;
				d_isFinal = isFinal;
				d_errResp = errResp;
			}

			inline void set_error(const ResponseType& resp, int rc, bool isFinal, const ErrorResponseType& errResp)
			{
				d_rc = rc;
				d_isFinal = isFinal;
				d_errResp = errResp;
			}
			virtual ~ResponseReceiver() {}
		};
	}
}

#endif	// RESPONSERECEIVER_H