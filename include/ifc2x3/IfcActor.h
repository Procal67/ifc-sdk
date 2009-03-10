/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCACTOR_H
#define IFC2X3_IFCACTOR_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/Referenced.h>
#include "ifc2x3/IfcObject.h"

namespace ifc2x3 {

    class CopyOp;
    class IfcActorSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcActor : public IfcObject {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'TheActor'.
         * 
         */
        virtual IfcActorSelect *getTheActor();
        /**
         * (const) Returns the value of the explicit attribute 'TheActor'.
         * 
         * @return the value of the explicit attribute 'TheActor'
         */
        virtual const IfcActorSelect *getTheActor() const;
        /**
         * Sets the value of the explicit attribute 'TheActor'.
         * 
         * @param value
         */
        virtual void setTheActor(const Step::RefPtr< IfcActorSelect > &value);
        /**
         * Gets the value of the inverse attribute 'IsActingUpon'.
         * 
         */
        Inverse_Set_IfcRelAssignsToActor_0_n &getIsActingUpon();
        /**
         * (const) Returns the value of the explicit attribute 'IsActingUpon'.
         * 
         * @return the value of the explicit attribute 'IsActingUpon'
         */
        virtual const Inverse_Set_IfcRelAssignsToActor_0_n &getIsActingUpon() const;
        friend class IfcRelAssignsToActor;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcActor(Step::Id id, Step::SPFData *args);
        virtual ~IfcActor();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcActor &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcActorSelect > m_theActor;
        /**
         */
        Inverse_Set_IfcRelAssignsToActor_0_n m_isActingUpon;

    };

}

#endif // IFC2X3_IFCACTOR_H
