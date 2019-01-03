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

#import <WCDB/WCTDatabase+Handle.h>
#import <WCDB/WCTDatabase+Private.h>
#import <WCDB/WCTHandle+Private.h>

@implementation WCTDatabase (Handle)

- (WCTHandle *)getHandle
{
    WCTDatabaseAssert(return nil;);
    return [[WCTHandle alloc] initWithDatabase:self];
}

- (BOOL)execute:(const WCDB::Statement &)statement
{
    WCTDatabaseAssert(return NO;);
    return _database->execute(statement);
}

@end