# ToySender

ToySender is a C++14 library designed to facilitate asynchronous request/response operations between components. It provides a simple framework for sending requests, receiving responses, and managing the state of ongoing operations.

## Features

- **Operation State Management**  
  The `operation_state.h` module tracks the lifecycle and status of each request, ensuring robust handling of asynchronous operations.

- **Request Sending**  
  The `RequestSender.h` module offers an interface for dispatching requests to receivers, abstracting the details of message delivery.

- **Request Receiving**  
  The `RequestReceiver.h` module allows components to handle incoming requests and send back responses, supporting customizable processing logic.

## Usage

1. **Include the headers** in your project:
   - `operation_state.h`
   - `RequestSender.h`
   - `RequestReceiver.h`

2. **Create a sender and receiver**:
   - Use `RequestSender` to initiate requests.
   - Implement a `RequestReceiver` to process and respond to requests.

3. **Track operation state**:
   - Use the types and functions in `operation_state.h` to monitor and control the status of each request.