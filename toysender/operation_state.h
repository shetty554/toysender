#ifndef OPATION_STATE_H
#define OPATION_STATE_H

namespace Enterprise {
	namespace ToySender {

		template<typename ReceiverType>
		class OperationState {
			ReceiverType d_receiver;
		public:
			inline OperationState(ReceiverType receiver) :d_receiver(receiver) {
			
			}

			inline void start() {
				//make async client call here and set the response received to the receiver object
				//generate async response here.

				//Do this inside the response callback of the async call.
				receiver.setValue("response from async call");
			}
		};
	}
}

#endif // OPATION_STATE_H