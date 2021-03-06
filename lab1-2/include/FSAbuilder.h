/*
 * FSAbuilder.h
 * 
 * Copyright (C) 2010 Leo Osvald <leo.osvald@gmail.com>
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"); 
 * you may not use this file except in compliance with the License.
 *  
 * You may obtain a copy of the License at 
 * 		http://www.apache.org/licenses/LICENSE-2.0
 *  
 * Unless required by applicable law or agreed to in writing, software 
 * distributed under the License is distributed on an "AS IS" BASIS, 
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
 * See the License for the specific language governing permissions and 
 * limitations under the License. 
 */

#ifndef FSABUILDER_H_
#define FSABUILDER_H_

#include "fsa.h"

#include <cstring>
#include <map>

template<typename T, typename InputType,
typename TransitionDomain, typename TransitionCodomain>
class FSAbuilder {
protected:
	static const int MAX_BUFF = 4096;
public:
	virtual void build_fsa(FSA<T, InputType, TransitionDomain, TransitionCodomain>& fsa,
			const std::string& input_file) = 0;
	virtual void create_state(FSA<T, InputType, TransitionDomain, TransitionCodomain>& fsa,
			int id, std::string label, bool accept) = 0;
};

#endif /* FSABUILDER_H_ */
