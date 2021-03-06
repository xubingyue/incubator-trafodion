/* -*-C++-*-
// @@@ START COPYRIGHT @@@
//
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
// @@@ END COPYRIGHT @@@
 ****************************************************************************
 *
 * File:         StmtDDLRegOrUnregHive.cpp
 * Description:  Methods for classes representing DDL (Un)Register Hive Objs
 *
 * Language:     C++
 *
 *
 *
 *****************************************************************************
 */

#define   SQLPARSERGLOBALS_FLAGS	// must precede all #include's

#include <stdlib.h>
#ifndef NDEBUG
#include <iostream>
#endif
#include "StmtDDLRegOrUnregHive.h"
#include "BaseTypes.h"
#include "ComDiags.h"
#ifndef   SQLPARSERGLOBALS_CONTEXT_AND_DIAGS
#define   SQLPARSERGLOBALS_CONTEXT_AND_DIAGS
#endif

#include "SqlParserGlobals.h"	// must be last #include


// -----------------------------------------------------------------------
// methods for class StmtDDLRegOrUnregHive
// -----------------------------------------------------------------------

//
// constructor
//
// constructor used for REGISTER/UNREGISTER HIVE objects
StmtDDLRegOrUnregHive::StmtDDLRegOrUnregHive(const QualifiedName & origObjName,
                                             const NABoolean isRegister,
                                             const ComObjectType objType,
                                             const NABoolean existsOption,
                                             const NABoolean isInternal,
                                             const NABoolean cascade,
                                             const NABoolean cleanup,
                                             CollHeap * heap)
  : StmtDDLNode(DDL_REG_OR_UNREG_HIVE),
    origObjName_(origObjName, PARSERHEAP()),
    objQualName_(origObjName, PARSERHEAP()),
    isRegister_(isRegister),
    objType_(objType),
    existsOption_(existsOption),
    isInternal_(isInternal),
    cascade_(cascade),
    cleanup_(cleanup)
{
}

//
// virtual destructor
//
StmtDDLRegOrUnregHive::~StmtDDLRegOrUnregHive()
{
}

//
// cast
//
StmtDDLRegOrUnregHive *
StmtDDLRegOrUnregHive::castToStmtDDLRegOrUnregHive()
{
  return this;
}

//
// End of File
//

