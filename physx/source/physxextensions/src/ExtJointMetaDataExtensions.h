// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2008-2024 NVIDIA Corporation. All rights reserved.
// Copyright (c) 2004-2008 AGEIA Technologies, Inc. All rights reserved.
// Copyright (c) 2001-2004 NovodeX AG. All rights reserved.  

#ifndef EXT_JOINT_META_DATA_EXTENSIONS_H
#define EXT_JOINT_META_DATA_EXTENSIONS_H
#include "PvdMetaDataExtensions.h"

namespace physx
{

namespace pvdsdk
{


struct PxExtensionPvdOnlyProperties
{
	enum Enum
	{
		FirstProp = PxExtensionsPropertyInfoName::LastPxPropertyInfoName,
		DEFINE_ENUM_RANGE( PxJoint_Actors, 2 ),
		DEFINE_ENUM_RANGE( PxJoint_BreakForce, 2 ),
		DEFINE_ENUM_RANGE( PxD6Joint_DriveVelocity, 2 ),
		DEFINE_ENUM_RANGE(PxD6Joint_Motion, static_cast<int>(PxD6Axis::eCOUNT)),
		DEFINE_ENUM_RANGE(PxD6Joint_Drive, PxD6Drive::eCOUNT * (static_cast<int>(PxExtensionsPropertyInfoName::PxD6JointDrive_PropertiesStop - PxExtensionsPropertyInfoName::PxD6JointDrive_PropertiesStart))),
		DEFINE_ENUM_RANGE( PxD6Joint_LinearLimit, 100 ),
		DEFINE_ENUM_RANGE( PxD6Joint_SwingLimit, 100 ),
		DEFINE_ENUM_RANGE( PxD6Joint_TwistLimit, 100 ),
		DEFINE_ENUM_RANGE( PxPrismaticJoint_Limit, 100 ),
		DEFINE_ENUM_RANGE( PxRevoluteJoint_Limit, 100 ),
		DEFINE_ENUM_RANGE( PxSphericalJoint_LimitCone, 100 ),
		DEFINE_ENUM_RANGE( PxJoint_LocalPose, 2 )
	};
};

}

}

#endif
