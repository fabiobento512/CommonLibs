/**
 * Copyright (C) 2017 Fábio Bento (random-guy)
 *
 * This library is distributed under the MIT License. See notice at the end
 * of this file.
 *
 */

#ifndef CONDITIONALSEMAPHORE_H
#define CONDITIONALSEMAPHORE_H

#include <atomic>
#include <stdexcept>

/***
 * Conditional Semaphore - Thread safe conditional semaphore. You can set the variable by using SetCondition(),
 * and unset it by using UnsetCondition() (you can set and unset multiple times). You can get the internal boolean variable state
 * by using ConditionIsSet().
 * ConditionIsSet() return true when there were more calls to SetCondition() than to UnsetCondition() and
 * false if there the calls to SetCondition() and UnsetCondition() were equal.
 *
 * UnsetCondition() throws an exception if it is called more than SetCondition().
 * */

 namespace Cosemaphore{
 
class ConditionalSemaphore
{
public:
    ConditionalSemaphore();
	void SetCondition();
	void UnsetCondition();
    bool ConditionIsSet();
private:
    std::atomic<long long> internalCounter;
};

}

#endif // CONDITIONALSEMAPHORE_H

/**
 * Copyright (c) 2017
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */
