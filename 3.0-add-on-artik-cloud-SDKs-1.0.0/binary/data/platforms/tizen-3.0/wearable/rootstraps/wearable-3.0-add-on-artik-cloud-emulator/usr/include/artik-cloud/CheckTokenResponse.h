/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * CheckTokenResponse.h
 *
 * 
 */

#ifndef _CheckTokenResponse_H_
#define _CheckTokenResponse_H_


#include <string>
#include "CheckTokenMessage.h"
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class CheckTokenResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	CheckTokenResponse();
	CheckTokenResponse(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~CheckTokenResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	CheckTokenMessage getData();

	/*! \brief Set 
	 */
	void setData(CheckTokenMessage  data);

private:
	CheckTokenMessage data;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _CheckTokenResponse_H_ */