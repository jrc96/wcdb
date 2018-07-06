/*
 * Tencent is pleased to support the open source community by making
 * WCDB available.
 *
 * Copyright (C) 2017 THL A29 Limited, a Tencent company.
 * All rights reserved.
 *
 * Licensed under the BSD 3-Clause License (the "License"); you may not use
 * this file except in compliance with the License. You may obtain a copy of
 * the License at
 *
 *       https://opensource.org/licenses/BSD-3-Clause
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <WCDB/Assertion.hpp>
#include <WCDB/Lang.h>

namespace WCDB {

namespace Lang {

JoinConstraint::JoinConstraint() : type(Type::NotSet)
{
}

CopyOnWriteString JoinConstraint::SQL() const
{
    std::string description;
    switch (type) {
    case Type::On:
        LangRemedialAssert(!expr.empty());
        description.append("ON " + expr.description().get());
        break;
    case Type::Using:
        LangRemedialAssert(!columns.empty());
        description.append("USING(" + columns.description().get() + ")");
        break;
    default:
        break;
    }
    return description;
}

} // namespace Lang

} // namespace WCDB
