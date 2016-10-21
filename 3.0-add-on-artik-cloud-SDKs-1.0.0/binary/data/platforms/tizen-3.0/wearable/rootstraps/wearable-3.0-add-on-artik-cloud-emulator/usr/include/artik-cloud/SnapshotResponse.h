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
 * SnapshotResponse.h
 *
 * 
 */

#ifndef _SnapshotResponse_H_
#define _SnapshotResponse_H_


#include <string>
#include <list>
#include <map>
#include "Object.h"

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 */

class SnapshotResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	SnapshotResponse();
	SnapshotResponse(char* str);
	
	/*! \brief Destructor.
	 */
	virtual ~SnapshotResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::map<std::string, std::string> getData();

	/*! \brief Set 
	 */
	void setData(std::map <std::string, std::string> data);
	/*! \brief Get 
	 */
	std::string getSdid();

	/*! \brief Set 
	 */
	void setSdid(std::string  sdid);

private:
	std::map <std::string, std::string>data;
	std::string sdid;
	void __init();
	void __cleanup();
	
};
}
}

#endif /* _SnapshotResponse_H_ */